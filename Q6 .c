//Write a program to calculate factorial of a number

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f=1;
    printf("Enter any no. :-");
    scanf("%d",&n);
    while(n)
    {
       f=f*n;
        n--;
    }
    printf("factorial is %d",f);
    getch();
    return 0;
}
