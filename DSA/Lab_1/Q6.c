#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *sentence1, *sentence2, *result;

    printf("Enter the first sentence: ");
    sentence1 = (char *)malloc(100 * sizeof(char));
    scanf("%99[^\n]%*c", sentence1);
    //scanf("%s", sentence1);

    printf("Enter the second sentence: ");
    sentence2 = (char *)malloc(100 * sizeof(char));
    scanf("%99[^\n]%*c", sentence2);
    //scanf("%s", sentence2);

    result = (char *)malloc((strlen(sentence1) + strlen(sentence2) + 1) * sizeof(char));

    strcpy(result, sentence1);
    strcat(result, " ");
    strcat(result, sentence2);

    printf("Result: %s\n", result);

    free(sentence1);
    free(sentence2);
    free(result);

    return 0;
}
