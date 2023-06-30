#include <iostream>

using namespace std;

// Function to calculate the forward difference table
void calculateForwardDifferenceTable(double x[], double y[], double forwardDifferenceTable[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        forwardDifferenceTable[i][0] = y[i];
    }

    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            forwardDifferenceTable[i][j] = forwardDifferenceTable[i + 1][j - 1] - forwardDifferenceTable[i][j - 1];
        }
    }
}

// Function to interpolate the functional value at a given x
double interpolateValue(double x, double xValues[], double forwardDifferenceTable[][10], int n)
{
    double result = forwardDifferenceTable[0][0];
    double term = 1.0;

    for (int i = 1; i < n; i++)
    {
        term *= (x - xValues[i - 1]) / (i * 1.0);
        result += term * forwardDifferenceTable[0][i];
    }

    return result;
}

int main()
{
    int n;    // Number of data points
    double x; // Value of x for interpolation

    cout << "Enter the number of data points: ";
    cin >> n;

    double xValues[10]; // Array to store x values
    double yValues[10]; // Array to store y values

    cout << "Enter the data points:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> xValues[i];
        cout << "y[" << i << "] = ";
        cin >> yValues[i];
    }
    double forwardDifferenceTable[10][10]; // 2D array to store the forward difference table

    calculateForwardDifferenceTable(xValues, yValues, forwardDifferenceTable, n);

    cout << "Enter the value of x for interpolation: ";
    cin >> x;

    double interpolatedValue = interpolateValue(x, xValues, forwardDifferenceTable, n);

    cout << "Interpolated value at x = " << x << ": " << interpolatedValue << endl;

    return 0;
}
