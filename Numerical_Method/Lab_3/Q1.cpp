#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return sin(exp(-x));
}

double trapezoidalIntegration(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = (func(a) + func(b)) / 2.0;

    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        sum += func(x);
    }

    return h * sum;
}

int main()
{
    double a, b;
    int n;

    cout << "Enter the lower limit (a): ";
    cin >> a;

    cout << "Enter the upper limit (b): ";
    cin >> b;

    cout << "Enter the number of intervals (n): ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Number of intervals (n) must be greater than zero.\n";
        return 1;
    }

    double result = trapezoidalIntegration(a, b, n);

    cout << "The approximate integral of the function is: " << result << endl;

    return 0;
}
