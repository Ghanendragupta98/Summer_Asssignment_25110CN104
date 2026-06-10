#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number: ");
    scanf("%d", &q);

    if (q == 1)
    {

        // PROGRAM TO PRINT STAR PYRAMID

        int n, i, j, k;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            for (k = 1; k <= (n - i); k++)
            {
                printf("  ");
            }
            for (j = 1; j <= (2 * i - 1); j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }

    if (q == 2)
    {

        // PROGRAM TO PRINT REVERSE PYRAMID

        int n, i, j, k;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            for (k = 1; k < i; k++)
            {
                printf("  ");
            }
            for (j = 0; j <= 2 * (n - i); j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }

    if (q == 3)
    {

        // PROGRAM TO PRINT NUMBER PYRAMID

        int n, i, j, k, l, temp;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            temp = 1;
            for (k = 1; k <= (n - i); k++)
            {
                printf("  ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%d ", temp);
                temp++;
            }
            temp = temp - 2;
            for (l = 1; l < i; l++)
            {
                printf("%d ", temp);
                temp--;
            }
            printf("\n");
        }
        return 0;
    }

    if (q == 4)
    {

        // PROGRAM TO PRINT CHARACTER PYRAMID

        int n, i, j, k, l;
        char c;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            c = 'A';
            for (k = 1; k <= (n - i); k++)
            {
                printf("  ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%c ", c);
                c++;
            }
            c = c - 2;
            for (l = 1; l < i; l++)
            {
                printf("%c ", c);
                c--;
            }
            printf("\n");
        }
        return 0;
    }

    else
    {
        printf("Enter a valid question number");
        return 0;
    }
}
