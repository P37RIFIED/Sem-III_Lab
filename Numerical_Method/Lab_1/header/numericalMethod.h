//#ifndef SECANT_SOLVER_H
//#define SECANT_SOLVER_H

#include <cmath>
#include <iostream>

using namespace std;

float func(float x);
float secantEquation(float old_X, float new_X);
float calcError(float x_old, float x_new);
float secantMethod(float lower_X, float higher_X, float expected_error);

float func(float x)
{
    return 5 * pow(x, 5) - 2 * pow(x, 2) - 6;
}

float secantEquation(float old_X, float new_X)
{
    return new_X - (func(new_X) * (new_X - old_X)) / (func(new_X) - func(old_X));
}

float calcError(float x_old, float x_new)
{
    return abs((x_new - x_old) / x_new);
}

float secantMethod(float lower_X, float higher_X, float expected_error)
{
    float error = 0;
    float x = lower_X;
    float y = higher_X;

    do
    {
        float new_higher_X = secantEquation(x, y);
        x = y;
        y = new_higher_X;
        error = calcError(y, x);
    } while (error > expected_error);

    return y;
}

