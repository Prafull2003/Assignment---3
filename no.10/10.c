//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage

#include<stdio.h>
int main()
{
    int c,s;

    printf("\nEnter the cost price ");
    scanf("%d",&c);
    printf("\nEnter the selling price ");
    scanf("%d",&s);

    if(c > s)
    {
        printf("Your loss is %d \n",c-s);
    }
    else
    {
       printf("Your profit is %d \n",s-c);
    } 
    return 0;
}
