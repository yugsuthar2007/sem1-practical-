#include <stdio.h>
#include <string.h>

void reverseWord(char word[])
{
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main()
{
    FILE *fp;
    char word[100];

    fp = fopen("Demo.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Could not open Demo.txt\n");
        return 1;
    }

    printf("Reversed words from file:\n");

    while (fscanf(fp, "%s", word) != EOF)
    {
        reverseWord(word);
        printf("%s ", word);
    }

    fclose(fp);
    return 0;
}
