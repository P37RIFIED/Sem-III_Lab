// Write a C program that dynamically allocates memory for a two-dimensional array of integers. Fill the array with random numbers and print them.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row, cols;
    int **arr;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    arr = (int **)malloc(row * sizeof(int *));
}