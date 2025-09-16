#include "squareimagewidget.h"
#include <QResizeEvent>

SquareImageWidget::SquareImageWidget(QWidget *parent)
    : QWidget(parent), m_label(new QLabel(this)) {
    m_label->setAlignment(Qt::AlignCenter);
    m_label->setScaledContents(true);
}

void SquareImageWidget::setImage(const QPixmap &pixmap) {
    m_label->setPixmap(pixmap);
}

void SquareImageWidget::resizeEvent(QResizeEvent *event) {
    int size = qMin(width(), height());
    m_label->setFixedSize(size, size);  // Enforce square
    QWidget::resizeEvent(event);
}
