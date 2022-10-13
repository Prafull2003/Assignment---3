// Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{
    int m;

    printf("\nEnter the month number ");
    scanf("%d",&m);

    if(1 == m || 3 == m || 5 == m || 7 == m || 8 == m || 10 == m || 12 == m)
      printf("31 days in this month\n");

    else if(4 == m || 6 == m || 9 == m || 11 == m)
      printf("30 days in this month\n");

    else
      printf("28 days in this\n");
}