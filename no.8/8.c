//Write a program to check whether a given year is a leap year or not

#include<stdio.h>
int main()
{
    int year;

    printf("\nEnter the year ");
    scanf("%d",&year);

    if(year % 100 == 0) 
    {
        if(year % 400 == 0)
          printf("%d is a leap year",year);
        else
          printf("%d is a not a leap ",year);       
    } 
    else 
    {
        if(year % 4 == 0)
          printf("%d is a leap year",year);
        else
          printf("%d is a not leap year",year);    
    }
     
    return 0;
}