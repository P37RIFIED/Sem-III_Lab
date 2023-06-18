#include <iostream>

using namespace std;

void fillTable(int array[], int column)
{
    for (int i = 0; i < column; i++)
    {
        cout << "Enter the element: ";
        cin >> array[i];
    }
}

double lagrangeInterpolation(double array1[], double array2[], double x, int n)
{
    double result = 0;
    double nu;
    double de;
    for (int i = 0; i < n; i++)
    {
        nu = 1;
        de = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                
                nu*= (x - array1[j]);
                de*= (x - array1[i] - array1[j]);
            }
            result += (nu/de)* array2[i];
        }
        return result;
    }

    return result;
}

int main()
{
    /*

    int ax[100], ay[100];
    int column;

    cout << "How many elements in a table: ";
    cin >> column;

    cout << "Enter an elements for ax" << endl;
    fillTable(ax, column);

    cout << "Enter an elements for ay" << endl;
    fillTable(ay, column);
    */

    double ax[5] = {1, 2, 3, 4, 5};
    double ay[5] = {1, 1.4142, 1.732, 2, 2.3};
    int n = 5;
    double x = 2.0;

    double result = lagrangeInterpolation(ax, ay, x, n);

    cout << result;

    return 0;
}