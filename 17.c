#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("enter a number");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("in reverse order\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}