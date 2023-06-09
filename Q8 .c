/*Write a program to check whether a given number is a Prime number or
not*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("enter any no. :- ");
    scanf("%d",&n);
    for(i=2;n%i;i++);
    if(i==n)
        printf("\n%d is prime no.",n);
    else
        printf("\n%d is not prime no.",n);
    getch();
    return 0;
}
