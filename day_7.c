#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number:");
    scanf("%d", &q);

    if (q == 1)
    {

        // PROGRAM TO CREATE RECUSIVE FACTORIAL

        int factorial(int number)
        {

            if (number == 0 || number == 0)
            {
                return 1;
            }
            else
            {
                return (number * factorial(number - 1));
            }
        }

        int num;
        printf("Enter a number : ");
        scanf("%d", &num);

        printf("The factorial of %d = %d", num, factorial(num));

        return 0;
    }

    if (q == 2)
    {

        // PROGRAM TO CREATE RECURSIVE FIBONACCI

        int fibonacci(int num, int a, int b)
        {
            if (num == 0)
            {
                return 0;
            }
            else
            {
                printf("%d ", a);
                fibonacci(num - 1, b, a + b);
            }
        }

        int n;
        printf("Enter number of terms : ");
        scanf("%d", &n);

        printf("Fibonacci series :  ");
        fibonacci(n, 0, 1);
        return 0;
    }

    if (q == 3)
    {

        // PROGRAM TO RECURSIVE SUM OF DIGITS

        int sumofdigit(int number)
        {
            if (number == 0)
            {
                return 0;
            }
            else
            {
                return ((number % 10) + sumofdigit((number / 10)));
            }
        }

        int n;
        printf("Enter a number : ");
        scanf("%d", &n);

        printf("Sum of digits = %d", sumofdigit(n));
        return 0;
    }

    if (q == 4)
    {

        // PROGRAM TO RECURSIVE REVERSE NUMBER

        int reverse(int number, int rev)
        {
            if (number == 0)
            {
                return rev;
            }
            else
            {
                rev = rev * 10 + (number % 10);
                return reverse(number / 10, rev);
            }
        }

        int n;
        printf("Enter a number : ");
        scanf("%d", &n);

        printf("Reverse of entered number = %d", reverse(n, 0));
        return 0;
    }

    else
    {
        printf("Enter a valid question number ");
        return 0;
    }
}