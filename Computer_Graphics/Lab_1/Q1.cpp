#include <iostream>
using namespace std;

int main()
{
    // a.
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // b.
    cout << "======================" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 3)
            {
                cout << "*";
            }
            else if (i == 0 && (j==3))
            {
                cout<<"*";
            }
            else if (i == 1 && (j == 2 || j == 3))
            {
                cout << "*";
            }
            else if (i == 2 && (j == 1 || j == 2 || j == 3))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    // c.
    cout << "======================" << endl;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    // d.
    cout << "======================" << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 && j == 3)
            {
                cout << "*";
            }
            else if (i == 2 && (j == 2 || j == 3 || j == 4))
            {
                cout << "*";
            }
            else if (i == 3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
