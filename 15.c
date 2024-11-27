#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return n;
    else 
    return 0;
}
int main()
{
    int n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=prime(a[i]);
    }
    printf("sum of prime=%d",sum);
    return 0;
}