#ifndef _PID_HPP_
#define _PID_HPP_

#include "main.h"

class PID
{
  public:

    explicit PID();
    void drive(int speed, int time);
    void resetPos();
    void turn(int degrees, int speed);
    void turnPID(int power);
    void resetSensor(int target);
    void driveBrakeHold();
    void resetBrake();
    void setZero();
    void movePID(int power);
    void move(double targetDistance, int maxPower, int flyWheelP, int indexerP, int intakeP, int tipperP);
};

#endif
