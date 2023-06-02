// Implement a C program that dynamically allocates memory for a structure representing a student record.Allow the user to enter the student's name and age, and display the entered information.
#include <stdio.h>
#include <stdlib.h>

struct record
{
    char name[50];
    int age;
};
int main()
{
    struct record *recordPtr;
    recordPtr = (struct record *)malloc(sizeof(struct record));

    printf("Enter the name of the student: ");
    scanf("%s", recordPtr->name);

    printf("Enter the age of the student: ");
    scanf("%d", recordPtr->age);

    printf("Student Name: %s\n", &recordPtr->name);
    printf("Student's Age: %d", &recordPtr->age);

    free(recordPtr);

    return 0;
}