#include<stdio.h>
int fact(int);
int fact(int n)
{
    if (n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

int main()
{
    int a;
    printf("Enter a number to calculate factorial ");
    scanf("%d",&a);
    printf("%d ",fact(a));
    return 0;
}
