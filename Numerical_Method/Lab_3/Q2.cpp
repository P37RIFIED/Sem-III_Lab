#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return sin(exp(-x));
}

double compositTrapozidalMethod(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        double x0 = a + i * h;
        double x1 = a + (i + 1) * h;
        sum += func(x0) + func(x1)/ 2.0;
    }

    return h * sum;
}

