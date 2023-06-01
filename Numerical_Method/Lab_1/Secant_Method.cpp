#include <iostream>
#include <cmath>

using namespace std;

double func(double x)
{
    return 5 * pow(x, 5) - 2 * pow(x, 2) - 6;
}

double secantMethod(double x0, double x1, double error)
{
    double x_old = x0;
    double x_new = x1;
    double x_next = 0.0;
    double new_error = 1.0;
    int iterations = 0;

    while (new_error > error)
    {
        x_next = x_new - (func(x_new) * (x_new - x_old)) / (func(x_new) - func(x_old));
        new_error = abs((x_next - x_new) / x_next);
        x_old = x_new;
        x_new = x_next;
        iterations++;
    }

    cout << "Estimated Root: " << x_next << endl;
    cout << "Functional Value at Root: " << func(x_next) << endl;
    cout << "Number of Iterations: " << iterations << endl;

    return x_next;
}

int main()
{
    double x0, x1, error;

    cout << "Enter the initial guess (x0): ";
    cin >> x0;
    cout << "Enter the second guess (x1): ";
    cin >> x1;
    cout << "Enter the expected error: ";
    cin >> error;

    double root = secantMethod(x0, x1, error);

    return 0;
}
