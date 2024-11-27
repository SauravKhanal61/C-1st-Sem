#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    char name[n][30],temp[30];  
    printf("enter the names\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("sorted names\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",name[i]);
    }
    return 0;
}