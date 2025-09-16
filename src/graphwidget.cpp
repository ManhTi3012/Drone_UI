#include "graphwidget.h"

// graphwidget.cpp
GraphWidget::GraphWidget(QWidget *parent) : QWidget(parent) {}

void GraphWidget::addDataPoint(double value) {
    data.append(value);
    if (data.size() > maxPoints)
        data.removeFirst();
    update(); // Trigger paint
}

void GraphWidget::paintEvent(QPaintEvent *) {
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

    if (data.empty()) return;

    // Margins
    const double leftMargin = 1;
    const double rightMargin = 30;
    const double topMargin = 1;
    const double bottomMargin = 1;

    const double plotHeight = height() - topMargin - bottomMargin;
    const double plotWidth = width() - leftMargin - rightMargin;

    // Find min and max for scaling
    double minVal = *std::min_element(data.begin(), data.end());
    double maxVal = *std::max_element(data.begin(), data.end());
    // double minVal = 2.0;
    // double maxVal = 2.0;
    // Ensure the range is symmetric around zero for proper centering
    double absMax = qMax(qAbs(minVal), qAbs(maxVal));
    if (absMax == 0) absMax = 1;  // prevent division by zero

    // Calculate scaling factors
    double yScale = plotHeight / (2 * absMax);  // split above and below zero
    double zeroLineY = topMargin + plotHeight/2; // center line

    // Draw zero line (always draw since data is centered around zero)
    p.setPen(QPen(Qt::gray, 1, Qt::DashLine));
    p.drawLine(leftMargin, zeroLineY, width() - rightMargin, zeroLineY);

    // Optional: dotted vertical markers (every 50px)
    p.setPen(QPen(QColor(100, 100, 100, 100), 1, Qt::DotLine));
    for (int x = leftMargin + 50; x < width() - rightMargin; x += 50) {
        p.drawLine(x, topMargin, x, height() - bottomMargin);
    }

    // Draw graph
    if (data.size() >= 2) {
        QPainterPath path;
        double xStep = plotWidth / (data.size() - 1);

        // First point
        double y = zeroLineY - data[0] * yScale;
        path.moveTo(leftMargin, y);

        // Remaining points
        for (int i = 1; i < data.size(); ++i) {
            double x = leftMargin + i * xStep;
            y = zeroLineY - data[i] * yScale;  // subtract because y increases downward
            path.lineTo(x, y);
        }

        p.setPen(QPen(QColor(0x2f, 0x9f, 0xff), 2));
        p.drawPath(path);
    }

    // Debug: draw widget borders
    // p.setPen(Qt::red);
    // p.drawRect(rect());
}
