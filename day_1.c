  #include<stdio.h>
int main()
{
    int q;
    printf("Enter question number:");
    scanf("%d",&q);


    if (q==1)
    {
    // PROGRAM TO CALUCUATE SUM OF FIRST N NATURAL NUMBERS

    
    int number,i,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        sum=sum+i;
    }
    
    printf("Sum of number upto %d is %d",number,sum);
    
    return 0;
}



    else if (q==2)
    {
    //PROGRAM TO PRINT TABLE OF GIVEN NUMBER 
    
    
        int x,i=1;
    printf("Enter number whose table is to be printed:");
    scanf("%d",&x);

    while (i<11)
    {
         
        printf("%d * %d = %d\n",x,i,x*i);
        i++;
        
    }

    return 0;
    }



    else if (q==3)
    {
    //PROGRAM TO FIND FACTORIAL OF A NUMBER
    
    
        int number,i,factorial=1;
    
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number==0)
    {
    printf("Factorial of  %d is %d",number,factorial);
    return 0;
    }
    
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    
    printf("Factorial of  %d is %d",number,factorial);
    
    return 0;
    
    }




    else if(q==4)
    {
     //PROGRAM TO COUNT NUMBER OF DIGITS
     
     
        int number,count=0;
        printf("Enter a number :");
        scanf("%d",&number);

        while(number>0)
        {
            count++;
            number=number/10;
        }
        printf("Number of digits = %d",count);

        return 0;
    }
    else
    printf("Enter a valid question number");
    return 0;
}

