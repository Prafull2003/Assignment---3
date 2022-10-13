//Write a program to check whether a given number is positive or non-positive

#include<stdio.h>
int main()
{
    int num;

    printf("\nEnter the number ");
    scanf("%d",&num);

    if(1<=num)
    {
      printf("%d is positive number",num);
    } 
    else
      printf("%d is non-positive",num);

    return 0;  

}