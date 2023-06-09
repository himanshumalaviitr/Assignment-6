//Write a program to count digits in a given number

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0;
    printf("Enter any no:- ");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        i++;
    }
    printf("No. of digit = %d",i);
    getch();
    return 0;
}
