// Write a program to reverse integer number using recursion

#include <stdio.h>

int reverse(int n, int reversed)
{
    if (n == 0)
    {
        return reversed;
    }
    else
    {
        int last_digit = n % 10;
        reversed = reversed * 10 + last_digit;
        return reverse(n / 10, reversed);
    }
}

int main()
{
    int num;
    printf("Enter a number to reverse: \n");
    scanf("%d", &num);
    printf("Reversed number is: %d", reverse(num, 0));
    return 0;
}
