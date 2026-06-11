#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number: ");
    scanf("%d", &q);

    if (q == 1)
    {

        // PROGRAM TO WRITE FUNVTON TO FIND SUM OF TWO NUMBERS

        int sum(int a, int b)
        {
            int x = a + b;
            return x;
        }

        int n1, n2;
        printf("Enter two numbers : ");
        scanf("%d%d", &n1, &n2);

        printf("Addition of %d and %d = %d", n1, n2, sum(n1, n2));
        return 0;
    }

    if (q == 2)
    {

        // PROGRAM TO WRITE FUNCTION TO FIND MAXIMUM

        int max(int a, int b, int c)
        {
            int x = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
            return x;
        }

        int n1, n2, n3;
        printf("Enter three numbers : ");
        scanf("%d%d%d", &n1, &n2, &n3);

        printf("Maximum = %d", max(n1, n2, n3));
        return 0;
    }

    if (q == 3)
    {

        // WRITE A PROGRAM TO WRITE FUNCTION TO CHECK PRIME

        int prime(int number)
        {
            int i, count = 0;

            if (number == 0 || number == 1)
            {
                printf("%d is not prime", number);
                return 0;
            }

            for (i = 2; i <= (number / 2); i++)
            {
                if (number % i == 0)
                {
                    count = 1;
                    break;
                }
            }

            if (count == 0)
                printf("%d is prime number", number);
            else
                printf("%d is not prime", number);

            return 0;
        }

        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        prime(n);
        return 0;
    }

    if (q == 4)
    {

        // PROGRAM TO WRITE FUNCTION TO FIND FACTORIAL

        int fact(int number)
        {
            int i, factorial = 1;

              if (number == 0)
            {

                return factorial;
            }

            for (i = 1; i <= number; i++)
            {
                factorial = factorial * i;
            }

            return factorial;
        }

        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        printf("%d", fact(n));
        return 0;
    }

    else
    {
        printf("Enter a valid question number");
        return 0;
    }
}