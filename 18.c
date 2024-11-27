#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    char add[30];
    int roll;
    char fclt[30];
    struct dob{
        int d;
        int m;
        int y;
    }dob;
};
int main()
{
    int i;
    struct student s[100];
    printf("Enter name address faculty roll number and the dob");
    for(i=0;i<2;i++)
    {
        printf("\nEnter the details for student %d\n",i+1);
        scanf("%s%s%s%d",s[i].name,s[i].add,s[i].fclt,&s[i].roll);
        printf("Enetr the date of birth for student %d\n",i+1);
        scanf("%d%d%d",&s[i].dob.y,&s[i].dob.m,&s[i].dob.d);
    }
    printf("The details of the student form computer\n");
    printf("%-20s%-20s%-20s%-10s","Name","Address","Faculty","roll number");
    for(i=0;i<2;i++)
    {
       if(strcmp(s[i].fclt,"computer")==0)
       {    
            printf("\n%-20s%-20s%-20s%-10d",s[i].name,s[i].add,s[i].fclt,s[i].roll);
       }
    }
    return 0;
}