// Write a program to convert an infix expression to postfix using a stack.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 20

typedef struct
{
    int top;
    char stack[MAX_SIZE];
} Stack;

void initializeStact(Stack *s)
{
    s->top = -1;
}

void push(Stack *s, char c)
{
    if (s->top == MAX_SIZE - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        s->stack[s->top] = c;
        s->top++;
    }
}

isEmpty(Stack *s)
{
    if (s->top == -1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

char pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->stack[s->top];
}

int precedence(char operator)
{
    if (operator== "^" || operator== "$")
    {
        return 3;
    }
    else if (operator== "/" || operator== "*")
    {
        return 2;
    }
    else if (operator== "+" || operator== "-")
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isOperator(char x)
{
    if (x == '*' || x == '+' || x == '-' || x == '/' || x == '$' || x == '^')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void infixToPostfix(char infix[], char postfix[])
{
    Stack *s;
    initializeStact(&s);
    char c;
    int i = 0, j = 0;

    for (i = 0; i < strlen(infix); i++)
    {
        c = infix[i];

        if (isalpha(c) || isdigit(c))
        {
            postfix[j++] = c;
        }

        else if (c == '(')
        {
            push(&s, c);
        }

        else if (c == ')')
        {
            while (isEmpty(&s) == 0 && s->stack[s->top] != '(')
            {
                postfix[j++] = pop(&s);
            }
        }

        else if (isOperator(c) == 1)
        {
            while (isEmpty == 0 && precedence(c) <= precedence(s->stack[s->top]))
            {
                postfix[j++] = pop(&s);
            }
            push(&s, c);
        }

        while (isEmpty(&s) == 0)
        {
            postfix[j++] = pop(&s);
        }

        postfix[j++] = '\0';
    }
}

