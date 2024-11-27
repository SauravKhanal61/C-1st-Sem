#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,*ptr,temp;
    printf("enter the number");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)= *(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}