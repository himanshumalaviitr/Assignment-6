//Write a program to calculate LCM of two numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,l=1,i=2;
    printf("Enter any two no.:- ");
    scanf("%d%d",&a,&b);
    while(i<=a||i<=b)
    {
        if(a%i==0||b%i==0)
        {
            l=l*i;
            if(a%i==0)
                a=a/i;
            if(b%i==0)
                 b=b/i;
        }
        i++;
    }
    printf("LCM= %d",l);
    getch();
    return 0;
}
