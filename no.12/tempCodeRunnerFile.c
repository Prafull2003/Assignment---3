//Write a program to check whether a given alphabet is in uppercase or lowercase

#include<stdio.h>
int main()
{
    char ch;

    printf("\nEnter any character ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    printf("'%c' is uppercase alphabet",ch);

    else if(ch >= 'a' && ch <= 'z')
    printf("'%c' is lowercase alphabet",ch);

    return 0;
}