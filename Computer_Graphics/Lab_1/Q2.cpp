// WAP to find the second largest number in an array
#include <iostream>

using namespace std;

int main()
{
    int array[5] = {1,20,50,70,50};
    int largest = 0;
    int secondLargest = 0;

    for (int i = 0; i < 5; i++)
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