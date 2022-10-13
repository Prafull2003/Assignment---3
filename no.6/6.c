//Write a program to print greater between two numbers. Print one number of both are the same

#include<stdio.h>
int main()
{
    int a,b;

    printf("\nEnter two number ");
    scanf("%d%d",&a,&b);

    if(a>b)
      printf("%d is greater number\n",a);
    else if(b>=a)
      printf("%d is greater number\n",b);
     
     return 0;
}