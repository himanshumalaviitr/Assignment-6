//Write a program to reverse a given number

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r;
    printf("enter any no.:- ");
    scanf("%d",&n);
    while(n)
       {
           r=r*10+(n%10);
           n=n/10;
       }
    printf("Reverse of given no. %d",r);
    getch();
    return 0;
}
