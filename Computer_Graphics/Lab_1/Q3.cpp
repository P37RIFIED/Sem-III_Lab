#include <iostream>
using namespace std;

int add(int array[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    return array[size - 1] + add(array, size - 1);
}

int main()
{
    int size = 5;
    int array[] = {1, 4, 5, 6, 8};
    int sum;
    sum = add(array, size);
    cout << "The sum of numbers in the array is: " << sum << endl;
    return 0;
}
