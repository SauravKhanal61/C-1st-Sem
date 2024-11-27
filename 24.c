#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}
float sum(int x, int n)
{
    if(n==1)
    return x;
    else if(n==0)
    return 0;
    else 
    return pow(x,2*n+1)/fact(2*n+1)+sum(x,n-1);;
}
int main()
{
    int n,x;
    printf("enter the value of x and n\n");
    scanf("%d%d",&x,&n);
    printf("the sum of the series is %f",(float)sum(x,n));
    return 0;
}