#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number:");
    scanf("%d",&q);


    if (q==1)
    {
        // PROGRAM TO CHECK PERFECT NUMBER

        int n,i,sum=0;
        printf("Enter a number :");
        scanf("%d",&n);

        for(i=1;i<n;i++)
        {
            if (n%i==0)
            sum=sum+i;
        }

        if(sum==n)
        printf(" The entered number is a perfect number ");
        else
        printf("The entered number is a not perfect number");

        return 0;
    } 


    if (q==2)
    {
        //PROGRAM TO CHECK STRONG NUMBER

        int n,i,sum=0,fact=1,temp,temp2;
        printf("Enter a number :");
        scanf("%d",&n); 
        temp=n;
        temp2=n;

        while(n>0)
        {
            temp=n%10;
            fact=1;
            for(i=2;i<=temp;i++)
            {
                fact=fact*i;
            }
            sum=sum + fact;
            n=n/10;
        }

          if(temp2==sum)
          printf(" The entered number is a strong number ");
          else
          printf(" The entered number is not a strong number ");

          return 0;   
    }


    if (q==3)
    {
        // PRAGRAM TO PRINT FACTORS OF A NUMBER

        int n,i ;
        printf("Enter a number : ");
        scanf("%d",&n);

        printf("The factors of %d are \n",n);

        for(i=1;i<n;i++)
        {
            if (n%i==0)
            printf("%d ",i);
        }

        return 0;
    }


    if (q==4)
    {
        // PROGRAM TO FIND LARGEST PRIME FACTOR

        int n,i,j,largest,count;
        printf("Enter a number : ");
        scanf("%d",&n);

        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                count = 0;
                for(j=2;j<=(i/2);j++)
                {
                    if(i%j==0)
                    {
                        count++;
                        break;
                    }
                }
                
                if(count==0 && i!=1)
                    {
                        largest=i;
                    }
            }
        }

        printf("Largest prime factor of %d is %d",n,largest);

        return 0;
    }
}