//Write a program to check whether a given number is an even number or an odd number without using % operator

#include<stdio.h>
int main()
{
    int num , a;

    printf("\nEnter the number ");
    scanf("%d",&num);
    
   
    if((num / 2)*2 == num)
       printf("%d is even number\n",num);
    else
       printf("%d is odd number\n",num);

       return 0;   

}

