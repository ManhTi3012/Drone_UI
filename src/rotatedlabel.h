#pragma once
#include <QLabel>
#include <QPainter>

class RotatedLabel : public QLabel {
public:
    using QLabel::QLabel;  // Inherit constructors

protected:
    void paintEvent(QPaintEvent *) override {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setRenderHint(QPainter::TextAntialiasing);

        // Rotate around center
        painter.translate(width() / 2.0, height() / 2.0);
        painter.rotate(-90);  // Rotate 90 degrees clockwise
        painter.translate(-height() / 2.0, -width() / 2.0);

        QRect rotatedRect(0, 0, height(), width());
        painter.drawText(rotatedRect, alignment(), text());
    }

    QSize sizeHint() const override {
        QSize s = QLabel::sizeHint();
        return QSize(s.height(), s.width());  // Swap dimensions
    }
};
