// Develop a C program that dynamically allocates memory for an array of characters. Allow the user to enter a string and store it in the allocated memory.Print the string
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *word;
    word = (char *) malloc(20 * sizeof(char));
    printf("Enter a string: ");
    scanf("%[^\n]s", word);
    printf("The string you've entered is: %s", word);
    free(word);
    return 0;
}