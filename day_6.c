#include <stdio.h>
#include <math.h>
int main()
{
    int q;
    printf("Enter question number:");
    scanf("%d",&q);


    if (q==1)
    {

        // PROGRAM TO COVERT DECIMAL TO BINARY 


        int number;
        printf("Enter number: ");
        scanf("%d",&number);

        if(number==0)
        {
        printf("The entered number in binary form: 0");
        return 0;
        }
       
        int b[number];
        int rem,i=0;
       
        while(number>0)
        {
           rem=number%2;
           number=number/2;
           b[i]=rem;
           i++;
        }
       
        printf("The entered number in binary form: ");
        for(int j=i-1;j>=0;j--)
        {
           printf("%d",b[j]);
        }
        return 0;

    }

    
    if (q==2)
    {

        // PROGRAM TO CONVERT BINARY INTO DECIMAL
        
        int binary ;
        int last_digit,weight=1,decimal=0;
        printf("Enter number in binary form: ");
        scanf("%d",&binary);
       
        while(binary>0)
        { 
         last_digit=binary%10;
         if ( last_digit==1 || last_digit==0 )
         {
         decimal=decimal+(last_digit*weight);
         weight=weight*2;
         binary=binary/10;
         }
         else
         {
         printf("Enter a valid number");
         return 0;
         }
        }
       
        printf("The decimal number corresponding to the entered binary number is %d",decimal);
        return 0;
   
    }


    if (q==3)
    {

        // PROGRAM TO COUNT SET BITS OF A NUMBER


        int number;
        printf("Enter number: ");
        scanf("%d",&number);

        if(number==0)
        {
        printf("The set bits of entered number is 0 ");
        return 0;
        }
       
        int b[number];
        int rem,i=0,j,count=0;
       
        while(number>0)
        {
           rem=number%2;
           number=number/2;
           b[i]=rem;
           i++;
        }

        for(j=0;j<i;j++)
        {
           if (b[j]==1 )
           count++;
        }

        printf("%d",count);
        return 0;
    }


    if (q==4)
    {

        // PROGRAM TO FIND X^N

        int x,n,i,product=1;
        printf("Enter x : ");
        scanf("%d",&x);
        printf("Enter n : ");
        scanf("%d",&n);

        if (n==0)
        {
            printf("%d ^ %d = 1",x,n);
            return 0;
        }

        for(i=1;i<=n;i++)
        {
            product=product*x;
        }
        printf("%d ^ %d = %d",x,n,product);
        return 0;
    }
}