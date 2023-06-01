#include <iostream>
#include <cmath>

using namespace std;

double equation(double x)
{
    return cos(x) + 5 * x - 6;
}

double halfIntervalMethod(double a, double b, double predefined_error)
{
    double mid_old = 0;
    double midn = 0.00;
    double error = 1.0;
    int iterations = 0;

    while (error > predefined_error)
    {
        midn = (a + b) / 2;

        if (equation(midn) < 0)
        {
            a = midn;
        }
        else
        {
            b = midn;
        }

        error = fabs((midn - mid_old) / midn);
        mid_old = midn;
        iterations++;
    }

    cout << "Estimated Root: " << midn << endl;
    cout << "Functional Value at Root: " << equation(midn) << endl;
    cout << "Number of Iterations: " << iterations << endl;

    return midn;
}

int main()
{
    double a, b;
    double predefined_error;

    cout << "Enter the lower bound (a): ";
    cin >> a;
    cout << "Enter the upper bound (b): ";
    cin >> b;
    cout << "Enter the predefined error tolerance: ";
    cin >> predefined_error;

    double root = halfIntervalMethod(a, b, predefined_error);

    return 0;
}
