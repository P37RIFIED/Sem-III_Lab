// Write a C program that dynamically allocates memory for a two-dimensional array of integers. Fill the array with random numbers and print them.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rows, cols;
    int **arr;
    srand(time(NULL));

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    arr = (int **)malloc(rows * sizeof(int));

    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }

    free(arr);
}