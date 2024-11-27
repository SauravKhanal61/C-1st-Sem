#include<stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("enetr a number");
    scanf("%d",&n);
    printf("the factorial is %ld",fact(n));
    return 0;
}