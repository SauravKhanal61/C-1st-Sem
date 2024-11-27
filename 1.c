//Program to display your name using characters.
#include<stdio.h>
int main()
{
    char ch[30];
    printf("enter your name\n");
    gets(ch);
    printf("Your name is ");
    puts(ch);
    return 0;
}