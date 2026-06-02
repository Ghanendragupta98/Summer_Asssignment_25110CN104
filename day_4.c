#include <stdio.h>
#include <math.h>
int main()
{
   int q;
    printf("Enter question number:");
    scanf("%d",&q);


    if (q==1)
    {

        //PROGRAM TO GENERATE FIBONACCI SERIES

        int n,i,temp1=0,temp2=1,nextterm;

        printf("Enter the number of terms : ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
        printf("%d\t",temp1);
        nextterm=temp1+temp2;
        temp1=temp2;
        temp2=nextterm;

         }

         return 0;
    }

    

    if (q==2)
    {
        //PROGRAM TO GENERATE nth TERM OF FIBONACCI SERIES
        int n,i,temp1=0,temp2=1,nextterm,temp3;

        printf("Enter the term of fibnocci series to be known : ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
        temp3=temp1;
        nextterm=temp1+temp2;
        temp1=temp2;
        temp2=nextterm;

         }
         printf(" Term of fibonacci series = %d",temp3);

        return 0;
    }



    if (q==3)
    {
       //PROGRAM TO CHECK WHETHER A NUMBER IS ARMSTRONG NUMBER

       int number,count=0,temp1,temp2,temp3=0;

       printf("Enter a number : ");
       scanf("%d",&number);

       temp1=number;
   
       while (number>0)
       {
       count++;
       number=number/10;
       
       }
   
       number=temp1;
   
      while (number>0)
      {
       temp2=number%10;
       temp3=temp3+pow(temp2,count);
       number=number/10;
       
       }
   
       number=temp1;
       if (temp3==number)
       printf(" The entered number is a armstrong number ");
       else 
       printf(" The entered number is not a armstrong number ");
   
       return 0;
    }



    if (q==4)
    {
      //PROGRAM TO PRINT ARMSSTRONG NUMBER IN A RANGE

      int start ,end;
      
      printf("Enter starting number:");
      scanf("%d",&start);
      printf("Enter ending number:");
      scanf("%d",&end);

      printf("Armstrong numbers are\n");
      for( int i=start;i<=end;i++)
      {
       int number,count=0,temp1,temp2,temp3=0;
       number=i;
       temp1=number;
   
       while (number>0)
       {
       count++;
       number=number/10;
       
       }
   
       number=temp1;
   
       while (number>0)
       {
       temp2=number%10;
       temp3=temp3+pow(temp2,count);
       number=number/10;
       
       }
   
       number=temp1;
       if (temp3==number)
       printf("%d \n",number);
   
       }
   
       return 0;  
    }



    else
    printf("Enter a valid question number");
    return 0;

}