#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    char txt[256]; // buffer for input
    printf("What's the text to cypher? ");
    fgets(txt, sizeof(txt), stdin);

    int key = atoi(argv[1]);
    printf("key: %i\n", key);

    printf("ciphertext: ");
    for (int i = 0; i < strlen(txt); i++)
    {
        if (txt[i] >= 'a' && txt[i] <= 'z')
        {
            printf("%c", (((txt[i] - 'a') + key) % 26) + 'a');
        }
        else if (txt[i] >= 'A' && txt[i] <= 'Z')
        {
            printf("%c", (((txt[i] - 'A') + key) % 26) + 'A');
        }
        else
        {
            printf("%c", txt[i]);
        }
    }
    printf("\n");
}
