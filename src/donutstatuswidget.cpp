#include "DonutStatusWidget.h"
#include <QPainter>
#include <QPainterPath>

DonutStatusWidget::DonutStatusWidget(QWidget *parent)
    : QWidget(parent)
{
    sectionColors.resize(6);
    for (int i = 0; i < 6; ++i) {
        sectionColors[i] = QColor(255, 22, 87);// Default inactive
    }

    connect(&animationTimer, &QTimer::timeout, this, &DonutStatusWidget::updateAnimation);
    animationTimer.setInterval(30);
}

void DonutStatusWidget::setActive(bool active) {
    isActive = active;
    if (active) {
        animationTimer.start();
    } else {
        animationTimer.stop();
        spinnerAngle = 0;
    }
    update();
}

void DonutStatusWidget::updateAnimation() {
    spinnerAngle += 3.0f;
    if (spinnerAngle >= 360) spinnerAngle = 0;
    update();
}

void DonutStatusWidget::setSectionColor(int section, int r, int g, int b) {
    if (section >= 0 && section < sectionColors.size()) {
        sectionColors[section] = QColor(r, g, b);
        update();
    }
}

void DonutStatusWidget::resizeEvent(QResizeEvent *event) {
    QWidget::resizeEvent(event);
    // Force square aspect ratio based on parent
    int size = qMin(parentWidget()->width(), parentWidget()->height());
    this->resize(size, size);
    this->move((parentWidget()->width() - size)/2, (parentWidget()->height() - size)/2);
    update(); // Trigger repaint
}

void DonutStatusWidget::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // 1. Calculate all dimensions
    const int widgetSize = qMin(parentWidget()->width(), parentWidget()->height());
    this->setGeometry((parentWidget()->width() - widgetSize)/2, (parentWidget()->height() - widgetSize)/2, widgetSize, widgetSize);
    const QPointF center(width() / 2.0, height() / 2.0);

    const int outerRadius = widgetSize / 2;
    const int sectionOuterRadius = outerRadius - 5;  // 5px margin from edge
    const int statusRingRadius = outerRadius * 0.4;   // 40% of radius
    const int centerHoleRadius = outerRadius * 0.3;   // 30% of radius
    const int spinnerRadius = outerRadius - 2;        // 2px from edge

    // 2. Draw the 6 colored sections (rotated -30 degrees)
    painter.save();
    {
        painter.translate(center);
        painter.rotate(-30); // Counter-clockwise rotation
        painter.translate(-center.x(), -center.y());

        for (int i = 0; i < 6; ++i) {
            QPainterPath section;
            section.moveTo(center);
            section.arcTo(center.x() - sectionOuterRadius, center.y() - sectionOuterRadius,
                          sectionOuterRadius * 2, sectionOuterRadius * 2,
                          i * 60, 60);
            section.lineTo(center);

            QPainterPath innerCut;
            innerCut.addEllipse(center, statusRingRadius, statusRingRadius);
            section = section.subtracted(innerCut);

            painter.fillPath(section, sectionColors[i]);
            painter.setPen(QPen(Qt::black, 1));
            painter.drawPath(section);
        }
    }
    painter.restore();
    // 5. Draw active spinner (outer animation)
    if (isActive) {
        QPainterPath spinner;
        spinner.arcMoveTo(center.x() - spinnerRadius, center.y() - spinnerRadius,
                          spinnerRadius * 2, spinnerRadius * 2, spinnerAngle);
        spinner.arcTo(center.x() - spinnerRadius, center.y() - spinnerRadius,
                      spinnerRadius * 2, spinnerRadius * 2, spinnerAngle, 255);

        painter.setPen(QPen(m_spinnerColor, 8));
        painter.drawPath(spinner);
    }
    // 3. Draw status ring (inner decorative ring)
    painter.setPen(QPen(isActive ? m_statusRingColor : Qt::gray, 5));
    painter.setBrush(Qt::NoBrush);
    painter.drawEllipse(center, statusRingRadius, statusRingRadius);

    // 4. Draw center hole
    painter.setPen(Qt::NoPen);
    painter.setBrush(m_centerColor);
    painter.drawEllipse(center, centerHoleRadius, centerHoleRadius);


}
