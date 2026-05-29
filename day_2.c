#include<stdio.h>
int main()
{
    int q;
    printf("Enter question number:");
    scanf("%d",&q);


    if (q==1)
    {
    //PROGRAM TO FIND SUM OF DIGITS OF A NUMBER
    
    
    int number,sumofdigit=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
   
   while (number>0)
   {
       sumofdigit=sumofdigit+(number%10);
       number=number/10;
   }
   
   printf("The sum of digits of entered number is %d",sumofdigit);
   
   return 0;
   }



   else if (q==2)
   {
   //PROFRAM TO REVERSE A NUMBER
   
   
    int n,count=0,reverse=0,rem;
    printf("Enter a number :");
    scanf("%d",&n);
    
    while(n>0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }

    printf("Reverse of the number = %d",reverse);
    return 0;

    }



    else if (q==3)
    {
    //PROGRAM TO FIND PRODUCT OF DIGITS
    
    
        int number,product=1;
    
    printf("Enter a number: ");
    scanf("%d",&number);
   
   while (number>0)
   {
       product=product*(number%10);
       number=number/10;
   }
   
   printf("The product of digits of entered number is %d",product);
   
   return 0;
    }




    else if (q==4)
    {
    //PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
    
    
    int n,count=0,reverse=0,rem,n1;
    printf("Enter a number :");
    scanf("%d",&n);
    
    n1=n;

    while(n1>0)
    {
        rem=n1%10;
        reverse=reverse*10+rem;
        n1=n1/10;
    }

    if(n==reverse)
    printf("The number is palindrome number");
    else
    printf("The number is not a palindrome number");

    return 0;
    }
    

    else
    printf("Enter a valid question number");
    return 0;
   
}
