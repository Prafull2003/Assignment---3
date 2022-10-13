//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\nEnter three numbers ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
      printf("%d is greatest number\n",a);

    else if(b>c)
      printf("%d is greatest number\n",b);

    else
      printf("%d is greatest number\n",c);

       
    return 0;

}