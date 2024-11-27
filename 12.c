#include<stdio.h>
void sum(int *p,int n,int *sa)
{
    int i;
    for(i=0;i<n;i++)
    {
        *sa+=*(p+i);
    }
}
int main()
{
    int n,i,s=0;
    printf("enter the number of arrays\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    sum(a,n,&s);
    printf("sum=%d",s);
    return 0;  
}