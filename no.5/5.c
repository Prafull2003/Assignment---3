//Write a program to check whether a given number is a three-digit number or not

#include<stdio.h>
int main()
{
  int num;

  printf("\nEnter the number ");
  scanf("%d",&num);
  
 if(num>99 && num<1000)
    printf("%d is three-digit number\n",num);
 else
    printf("%d is not three-digit number\n",num);

  return 0;

}