#pragma once
#include <QWidget>
#include <QLabel>

class SquareImageWidget : public QWidget {
    Q_OBJECT
public:
    explicit SquareImageWidget(QWidget *parent = nullptr);
    void setImage(const QPixmap &pixmap);  // Optional: if you need to change images later

protected:
    void resizeEvent(QResizeEvent *event) override;

private:
    QLabel *m_label;
};
