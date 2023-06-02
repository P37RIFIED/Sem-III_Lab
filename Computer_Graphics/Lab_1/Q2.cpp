// WAP to find the second largest number in an array
#include <iostream>

using namespace std;

int main()
{
    int array[10];
    int largest = 0;
    int secondLargest = 0;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }
    }

    cout << "The second largest number is: " << secondLargest;
    return 0;
}