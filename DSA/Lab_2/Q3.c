// Write a program to convert an infix expression to postfix using a stack.
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct 
{
    int top;
    char stack[MAX_SIZE];
}Stack;

void initializeStact(Stack *s)
{
    s->top = -1;
}

int precedence(char operator)
{
    if(operator == "^" || operator == "$")
    {
        return 3;
    }
    else if (operator == "/" || operator == "*")
    {
        return 2;
    }
    else if(operator == "+" || operator == "-")
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



