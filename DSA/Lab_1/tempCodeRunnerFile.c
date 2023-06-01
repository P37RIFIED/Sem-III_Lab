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