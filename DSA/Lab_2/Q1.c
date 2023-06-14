// Implement a stack using an array and write functions to perform push and pop operations
#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int stack[100];
    int top;
} Stack;

void initialize(Stack *s)
{
    s->top = -1;
}

void push(Stack *s, int item)
{
    if(s->top == MAX_SIZE)
    {
        printf("Stack Overflow\n");
    } else
    {
        s->top++;
        s->stack[s->top] = item;
    }
}

int pop(Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    } else
    {
        int item = s->stack[s->top];
        s->top--;
        return item;
    }
}

void isEmpty(Stack *s)
{
    if (s->top == -1)
    {
        printf("The stack is empty\n");
    } else
    {
        printf("The stack is not empty\n");
    }
}

int sizeOf(Stack *s)
{
    return s->top + 1;
}

int main()
{
    Stack hello;
    initialize(&hello);
    int popped;

    push(&hello, 10);
    push(&hello, 2);
    push(&hello, 3);
    push(&hello, 11);
    push(&hello, 15);    

    isEmpty(&hello);

    printf("The size of stack is: %d\n", sizeOf(&hello));

    popped = pop(&hello);

    printf("Popped Item: %d\n", popped);

    return 0;
}
