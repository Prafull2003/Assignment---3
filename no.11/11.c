//Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed

#include<stdio.h>
int main()
{
    int m,s,e,a,h;
    printf("\nEnter the marks of 5 subjects ");
    scanf("%d %d %d %d %d",&m,&s,&e,&a,&h);

    if(m>=33 && s>=33 && e>=33 && m>=33 && h>=33)
    printf("YOU ARE PASS");

    else
    printf("YOU ARE FAILED");

    return 0;
    
}
