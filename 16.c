#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char str[30],c;
    printf("enter a string");
    scanf("%s",str);
    printf("enter the character");
    scanf("  %c",&c);
    printf("enter the position");
    scanf("%d",&n);
    for(i=strlen(str);i>=n;i--)
    {
        str[i+1]=str[i];
    }
    str[n]=c;
    printf("string = %s",str);
    return 0;
}