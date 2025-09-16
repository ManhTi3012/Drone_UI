// virtualhorizon.cpp
#include "virtualhorizon.h"
#include <QPainter>
#include <QtMath>

VirtualHorizon::VirtualHorizon(QWidget *parent)
    : QWidget(parent), pitch(0), roll(0) {}

void VirtualHorizon::setAngles(double pitchDeg, double rollDeg) {
    pitch = pitchDeg;
    roll = rollDeg;
    update();  // trigger repaint
}

void VirtualHorizon::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Get widget center
    QPointF center(width() / 2.0, height() / 2.0);

    // Convert pitch and roll
    double pitchOffset = - pitch * 2.0;  // pixels per degree
    double rollRad = - qDegreesToRadians(roll);

    // Horizon line length
    double lineLength = width() * 1.5;

    // Calculate offset vector due to roll
    QPointF offset(
        std::cos(rollRad) * (lineLength / 2.0),
        std::sin(rollRad) * (lineLength / 2.0)
        );

    // Adjust pitch vertically
    QPointF pitchShift(0, pitchOffset);

    // Line endpoints
    QPointF p1 = center - offset + pitchShift;
    QPointF p2 = center + offset + pitchShift;

    // Clear background
    painter.fillRect(rect(), Qt::transparent);

    // Fill area under the horizon line
    QPolygonF polygon;
    polygon << p1 << p2 << QPointF(width(), height()) << QPointF(0, height());
    QColor fillColor(47, 159, 255, 150); // Custom RGB with some transparency
    painter.setBrush(fillColor);
    painter.setPen(Qt::NoPen);
    painter.drawPolygon(polygon);

    // Draw horizon line
    QPen pen(QColor(47, 159, 255), 2); // Custom RGB
    painter.setPen(Qt::white);
    painter.setBrush(Qt::NoBrush);
    painter.drawLine(p1, p2);

    // // Optional: draw widget boundary
    // painter.setPen(Qt::red);
    // painter.drawRect(rect());
}
