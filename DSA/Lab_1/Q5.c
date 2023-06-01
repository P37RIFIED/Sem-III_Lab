// Write a C program that dynamically allocates memory for a two-dimensional array of integers. Fill the array with random numbers and print them.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int row, cols;
    int **arr;
    srand(time(NULL));

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    arr = (int **)malloc(row * sizeof(int *));

    for (int i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = rand();
        }
    }

    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);}
        printf("\n");
    }
    for(int i = 0; i<row; i++)
    {
        free (arr[i]);
    }
    
    free(arr);
}