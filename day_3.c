#include<stdio.h>
int main()
{
   int q;
    printf("Enter question number:");
    scanf("%d",&q);


    if (q==1)


    //PROGRAM TO CHECK WHETHER A NUMBER IS PRIME OR NOT


    {
        int number,i,count=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number==0||number==1)
    {
    printf("%d is not prime",number);
    return 0;
    }
    
    
    for(i=2;i<=(number/2);i++)
    {
        if(number%i==0)
        {
            count=1;
            break;
        }
    }
    
   if (count==0)
   printf("%d is prime number",number);
   else
   printf("%d is not prime",number);

   return 0;
    }



    if (q==2)

    //PROGRAM TO PRINT PRIME NUMBERS IN A RANGE


    {
        int start,end,i,j,count;

        printf("Enter starting number:");
        scanf("%d",&start);
        printf("Enter ending number:");
        scanf("%d",&end);

        for(i=start;i<=end;i++)
        {
         if((i==0)||(i==1))
         {
            continue;
         }
         count=0;
         for(j=2;j<=(i/2);j++)
         {
        if(i%j==0)
        {
            count=1;
            break;
        }
        }
        if (count==0)
        printf("%d ",i);
    
        }
        return 0;
    }



    if(q==3)
    
    //PROGRAM TO FIND GCD OF TWO NUMBERS


    {
        int a,b,i,gcd;

        printf("Enter two numbers :");
        scanf("%d %d",&a,&b);

        for(i=1;i<=a && i<=b;i++)
        {
            if (a%i==0 && b%i==0)
            {
                gcd=i;
            }
        }
        printf("GCD =  %d",gcd);
        return 0;
    }
    
    if(q==4)

    //PROGRAM TO FIND LCM OF TWO NUMBERS

    
    {
       int a,b,i,max;

        printf("Enter two numbers :");
        scanf("%d %d",&a,&b);

        max=(a>b)?a:b;

        while (1)
        {
            if(max % a==0 && max%b==0)
            {
                printf("LCM =%d",max);
                break;
            }
            max++;
        }
        return 0;
    }
}