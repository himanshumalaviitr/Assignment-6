//Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s=0;
    printf("Enter any no. :-");
    scanf("%d",&n);
    while(n)
    {
        s=s+n*n;
        n--;
    }
    printf("Sum is %d",s);
    getch();
    return 0;
}
