// Create a C program that dynamically allocates memory for a single-dimensional array of integers. Initialize the array with values 1 to 10 and print them
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numberArray;
    int size = 10;
    numberArray = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++)
    {
        numberArray[i] = i + 1;
    }
    for(int i = 0; i<size; i++)
    {
        printf("%d ", numberArray[i]);
    }
    free(numberArray);
    return 0;
}