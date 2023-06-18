#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the divided difference table
void calculate_divided_differences(const vector<double> &x, const vector<double> &y, vector<vector<double>> &divided_diff)
{
    int n = x.size();
    divided_diff.resize(n, vector<double>(n));

    // Initializing the divided difference table
    for (int i = 0; i < n; i++)
    {
        divided_diff[i][0] = y[i];
    }

    // Calculating divided differences recursively
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            divided_diff[i][j] = (divided_diff[i + 1][j - 1] - divided_diff[i][j - 1]) / (x[i + j] - x[i]);
        }
    }
}

// Function to perform Newton's central divided difference interpolation
double newton_interpolation(const vector<double> &x, const vector<double> &y, const vector<vector<double>> &divided_diff, double target)
{
    int n = x.size();
    double result = divided_diff[0][0];
    double term = 1.0;

    for (int i = 1; i < n; i++)
    {
        term = term * (target - x[i - 1]);

        result = result + (divided_diff[0][i] * term);
    }

    return result;
}

int main()
{
    vector<double> x = {1.0, 2.0, 3.0, 4.0, 5.0};   
    vector<double> y = {2.0, 3.0, 6.0, 10.0, 15.0}; 
    double target = 2.5;                            
    vector<vector<double>> divided_diff;
    calculate_divided_differences(x, y, divided_diff);

    double result = newton_interpolation(x, y, divided_diff, target);

    cout << "Interpolated value at " << target << " is " << result << endl;

    return 0;
}
