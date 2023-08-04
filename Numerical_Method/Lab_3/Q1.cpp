// Write a program to calculate integration using Trapezoidal rule
#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return sin(1/exp(x));
}

double trapezoidalIntegration(double a, double b)
{
    double h = (b - a) / 2;
    double sum = (func(a) + func(b));

    return h * sum;
}

int main()
{
    double a, b;

    cout << "Enter the lower limit (a): ";
    cin >> a;

    cout << "Enter the upper limit (b): ";
    cin >> b;

    double result = trapezoidalIntegration(a, b);

    cout << "The approximate integral of the function using the Trapezoidal rule is: " << result << endl;

    return 0;
}
