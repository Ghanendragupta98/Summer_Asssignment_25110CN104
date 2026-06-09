#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number: ");
    scanf("%d", &q);

    if (q == 1)
    {

        // PROGRAM TO PRINT REVERSE STAR PATTERN

        int n, i, j;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = n; i > 0; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        return 0;
    }

    if (q == 2)
    {

        // PROGRAM TO PRINT REVERSE NUMBER

        int n, i, j, temp;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = n; i > 0; i--)
        {
            temp = 1;
            for (j = 1; j <= i; j++)
            {
                printf("%d ", temp);
                temp++;
            }
            printf("\n");
        }

        return 0;
    }

    if (q == 3)
    {

        // PROGRAM TO PRINT REPEATED CHARACTER PATTERN

        int n, i, j;
        char c = 'A';

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("%c ", c);
            }
            c++;
            printf("\n");
        }

        return 0;
    }

    if (q == 4)
    {

        // PROGRAM TO PRINT HOLLOW SQUARE PATTERN

        int n, i, j;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            if ((i == n) || (i == 1))
            {
                for (j = 1; j <= n; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            else
            {
                for (j = 1; j <= n; j++)
                {
                    if ((j == 1) || (j == n))
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
        return 0;
    }

    else
    {
        printf("Enter a valid question number ");
        return 0;
    }
}
