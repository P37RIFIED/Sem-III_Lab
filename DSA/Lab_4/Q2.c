// Write a program to check prime number using recursion

#include <stdio.h>

int checkPrime(int n, int div)
{
    if (n <= 2)
    {
        return 1;
    }
    else if (n % div == 0)
    {
        return 0;
    }
    else if (div * div > n)
    {
        return 1;
    }
    else
    {
        return checkPrime(n, div + 1);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (checkPrime(num, 2))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
