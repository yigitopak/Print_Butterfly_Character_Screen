
#include <stdio.h>
#include <stdlib.h>

void drawShape(int sideLength, char character)
{
    int i, j;
    for (j = sideLength; j > 0; j--)
    {
        for (i = 1; i <= sideLength - j; i++)
        {
            printf(" ");
        }

        for (i = 1; i <= 2 * j - 1; i++)
        {
            printf("%c", character);
        }

        printf("\n");
    }

    for (j = 1; j <= sideLength; j++)
    {
        for (i = 1; i <= sideLength - j; i++)
        {
            printf(" ");
        }

        for (i = 1; i <= 2 * j - 1; i++)
        {
            printf("%c", character);
        }

        printf("\n");
    }
}

int main()
{
    int sideLength;
    char character;
    
    printf("Enter the character to be printed: ");
    scanf("%c", &character);
    
    printf("Enter the side length: ");
    scanf("%d", &sideLength);

    printf("\n\n\n");
    drawShape(sideLength, character);
    
    return 0;
}
