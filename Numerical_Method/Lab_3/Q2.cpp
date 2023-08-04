// Write a program to calculate integration using composite Trapezoidal rule
#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return sin(1/exp(x)); 
}

double compositeTrapezoidalIntegration(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        double x0 = a + i * h;
        double x1 = a + (i + 1) * h;
        sum += (func(x0) + func(x1));
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

    double result = compositeTrapezoidalIntegration(a, b, n);

    cout << "The approximate integral of the function is: " << result << endl;

    return 0;
}
