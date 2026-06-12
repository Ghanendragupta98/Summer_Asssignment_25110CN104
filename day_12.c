#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number: ");
    scanf("%d", &q);

    if (q == 1)
    {

        // PROGRAM TO WRITE FUNCTION FOR PALINDROME

        void palindrome(int n)
        {
            int count = 0, reverse = 0, rem, n1;

            n1 = n;

            while (n1 > 0)
            {
                rem = n1 % 10;
                reverse = reverse * 10 + rem;
                n1 = n1 / 10;
            }

            if (n == reverse)
                printf("The number is palindrome number");
            else
                printf("The number is not a palindrome number");
        }
        int number;
        printf("Enter a number :");
        scanf("%d", &number);

        palindrome(number);
        return 0;
    }

    if (q == 2)
    {

        // PROGRAM TO WRITE FUNCTION FOR ARMSTRONG

        int armstrong(int number)
        {
            int count = 0, temp1, temp2, temp3 = 0;

            temp1 = number;

            while (number > 0)
            {
                count++;
                number = number / 10;
            }

            number = temp1;

            while (number > 0)
            {
                temp2 = number % 10;
                temp3 = temp3 + pow(temp2, count);
                number = number / 10;
            }

            number = temp1;
            if (temp3 == number)
                printf(" The entered number is a armstrong number ");
            else
                printf(" The entered number is not a armstrong number ");

            return 0;
        }

        int n;
        printf("Enter a number : ");
        scanf("%d", &n);

        armstrong(n);
        return 0;
    }

    if (q == 3)
    {

        // PROGRAM TO WRITE FUNCTION FOR FIBONACCI

        int fibonacci(int n)
        {
            int i, temp1 = 0, temp2 = 1, nextterm;

            for (i = 1; i <= n; i++)
            {
                printf("%d\t", temp1);
                nextterm = temp1 + temp2;
                temp1 = temp2;
                temp2 = nextterm;
            }

            return 0;
        }

        int number;
        printf("Enter the number of terms : ");
        scanf("%d", &number);

        fibonacci(number);
        return 0;
    }

    if (q == 4)
    {

        // PROGRAM TO WRITE FUNCTION FOR PERFECT NUMBER

        int perfect(int n)
        {
            int i, sum = 0;

            for (i = 1; i < n; i++)
            {
                if (n % i == 0)
                    sum = sum + i;
            }

            if (sum == n)
                printf("The entered number is a perfect number ");
            else
                printf("The entered number is a not perfect number");

            return 0;
        }
        int number;
        printf("Enter a number : ");
        scanf("%d", &number);

        perfect(number);
        return 0;
    }

    else
    {
        printf("Enter a valid question number");
        return 0;
    }
}