#include <iostream>
#include<cmath>

using namespace std;

double func(double x)
{
    return sin(exp(-x));
}

double simpsonsThreeEighthIntegration(double a, double b)
{
    double h = (b - a) / 3;
    double x0 = a;
    double x1 = a + h;
    double x2 = a + 2 * h;
    double x3 = b;

    double integral = (3 * h / 8) * (func(x0) + 3 * func(x1) + 3 * func(x2) + func(x3));
    return integral;
}

int main()
{
    double a, b;

    cout << "Enter the lower limit (a): ";
    cin >> a;

    cout << "Enter the upper limit (b): ";
    cin >> b;

    double result = simpsonsThreeEighthIntegration(a, b);

    cout << "The approximate integral of the function using Simpson's 3/8 rule is: " << result << endl;

    return 0;
}