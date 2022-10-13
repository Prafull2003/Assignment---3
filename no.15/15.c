// Write a program to check whether a given number is positive, negative or zero

#include<stdio.h>
int main()
{
    int num;

    printf("\nEnter the number ");
    scanf("%d",&num);
    
    if(num > 0)
      printf("%d is positive number ",num);

    else if(num < 0)
      printf("%d is negative number",num);

    else 
      printf("%d is zero number",num);

    return 0;  
}