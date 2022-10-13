//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int a,b,c,D;

    printf("Enter value of a,b,c ");
    scanf("%d %d %d",&a,&b,&c);

    D = b*b-4*a*c;

    if(D<0){
       printf("Both roots are imaginary");
    }
    if(D==0){
       printf("Both roots real and equal"); 
    }
    if(D>0){
       printf("Roots are real and distinct");  
    }  
     
}
