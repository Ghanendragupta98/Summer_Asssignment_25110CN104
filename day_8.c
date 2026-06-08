#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number:");
    scanf("%d", &q);

    if (q == 1)
    {

        // PROGRAM TO PRINT HALF PYRAMID PATTERN

        int n, i, j;
        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        return 0;
    }

    if (q == 2)
    {

        // PROGRAM TO PRINT NUMBER TRIANGLE

        int n, i, j, temp;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            temp = 1;
            for (j = 0; j <= i; j++)
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

        // PROGRAM TO PRINT CHARACTER TRIANGLE

        int n, i, j;
        char c;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            c = 'A';
            for (j = 0; j <= i; j++)
            {
                printf("%c ", c);
                c++;
            }
            printf("\n");
        }

        return 0;
    }

    if (q == 4)
    {

        // PROGRAM TO PRINT REPEATED - NUMBER PATTERN

        int n, i, j, temp = 1;

        printf("Enter number of rows : ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("%d ", temp);
            }
            temp++;
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