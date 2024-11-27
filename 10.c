#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30];
    printf("enter a string\n");
    scanf("%s",str1);
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1,str2)==0)
    printf("%s is palindrom string");
    else
    printf("%s is not palindrom string");
    return 0;
}