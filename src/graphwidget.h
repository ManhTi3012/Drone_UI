#pragma once

#include <QWidget>
#include <QPainter>
#include <QtMath>
#include <QPainterPath>

class GraphWidget : public QWidget {
    Q_OBJECT

public:
    explicit GraphWidget(QWidget *parent = nullptr);

    void addDataPoint(double value);

protected:
    void paintEvent(QPaintEvent *) override;

private:
    QVector<double> data;
    const int maxPoints = 200;
};

