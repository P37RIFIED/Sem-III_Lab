#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return sin(exp(-x));
}

double compositeSimpsonsOneThirdIntegration(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = func(a) + func(b);

    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        sum += (i % 2 == 0) ? 2 * func(x) : 4 * func(x);
    }

    return (h / 3) * sum;
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

    if (n % 2 != 0)
    {
        cout << "Number of intervals (n) must be an even number for composite Simpson's 1/3 rule.\n";
        return 1;
    }

    double result = compositeSimpsonsOneThirdIntegration(a, b, n);

    cout << "The approximate integral of the function using composite Simpson's 1/3 rule is: " << result << endl;

    return 0;
}
