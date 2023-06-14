// Write a menu program to demonstrate the simulation of stack operations in array implementation.
#include <stdio.h>

#define MAX_SIZE 100

typedef struct
{
    int stack[100];
    int top;
} Stack;

void initialize(Stack *s)
{
    s->top = -1;
}

void push(Stack *s, int item)
{
    if (s->top == MAX_SIZE)
    {
        printf("Stack Overflow\n");
    }
    else
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
    }
    else
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
    }
    else
    {
        printf("The stack is not empty\n");
    }
}

int sizeOf(Stack *s)
{
    return s->top + 1;
}

void printMenu()
{
    printf("Stack Operations Menu\n");
    printf("1. Push item\n");
    printf("2. Pop item\n");
    printf("3. Display stack\n");
    printf("4. Exit\n");
}

void displayStack(Stack *s)
{   
    printf("Stack: \n");
    for (int i = 0; i <= s->top; i++)
    {
        printf("\t%d\n", s->stack[i]);
    }
    printf("\n");
}

int main()
{
    Stack hello;
    initialize(&hello);

    int choice = 0, item;


    while(choice <= 4)
    {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter a item to push: ");
            scanf("%d", &item);
            printf("\n");
            push(&hello, item);
            break;
        
        case 2:
            pop(&hello);
            printf("Item popped\n");
            break;
        
        case 3:
            displayStack(&hello);
            break;

        case 4:
            printf("\nExiting the program");
            return 0;

        default:
            printf("\nInvalid Choice\nExting the program");
            return 0;
        }

    }
}