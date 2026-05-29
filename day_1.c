#include<stdio.h>
int main()
{
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
