//Write a C program that dynamically allocates memory for an integer variable. Assign a value to the variable and print it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *number;
    number = (int*)malloc(sizeof(int));
    *number = 1200;
    printf("The number is %d", *number);
    free(number);
    return 0;
}