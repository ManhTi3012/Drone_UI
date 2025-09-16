#pragma once

#include <QWidget>
#include <QColor>
#include <QTimer>

class DonutStatusWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DonutStatusWidget(QWidget *parent = nullptr);
    void setSectionColor(int section, int r, int g, int b);
    void setActive(bool active);

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void updateAnimation();

    void setStatusRingColor(const QColor &color) {
        m_statusRingColor = color;
        update();
    }

    void setSpinnerColor(const QColor &color) {
        m_spinnerColor = color;
        update();
    }

    void setCenterColor(const QColor &color) {
        m_centerColor = color;
        update();
    }

private:
    QVector<QColor> sectionColors;
    QTimer animationTimer;
    float spinnerAngle = 0;
    bool isActive = false;
    QColor m_statusRingColor = QColor(255, 161, 00);  // Inner ring (status)
    QColor m_spinnerColor = QColor(255, 161, 00); // Outer spinner
    QColor m_centerColor = Qt::black;     // Center hole
};
