#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return sin(exp(-x));
}

double simpsonsOneThirdIntegration(double a, double b)
{
    double h = (b - a) / 2;
    double x0 = a;
    double x1 = a + h;
    double x2 = b;

    double integral = (h / 3) * (func(x0) + 4 * func(x1) + func(x2));
    return integral;
}

int main()
{
    double a, b;

    cout << "Enter the lower limit (a): ";
    cin >> a;

    cout << "Enter the upper limit (b): ";
    cin >> b;

    double result = simpsonsOneThirdIntegration(a, b);

    cout << "The approximate integral of the function using Simpson's 1/3 rule is: " << result << endl;

    return 0;
}
