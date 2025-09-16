// virtualhorizon.h
#pragma once

#include <QWidget>

class VirtualHorizon : public QWidget {
    Q_OBJECT

public:
    explicit VirtualHorizon(QWidget *parent = nullptr);
    void setAngles(double pitchDeg, double rollDeg);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    double pitch; // degrees
    double roll;  // degrees
};
