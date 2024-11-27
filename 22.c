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
    FILE *f;
    f=fopen("student.txt","a+");
    int i,n;
    printf("enter the number of students:");
    scanf("%d",&n);
    struct student s[100];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the details for student %d\n",i+1);
        scanf("%s%s%s%d",s[i].name,s[i].add,s[i].fclt,&s[i].roll);
        fprintf(f,"%s %s %s %d ",s[i].name,s[i].add,s[i].fclt,s[i].roll);
        printf("Enetr the date of birth for student %d\n",i+1);
        scanf("%d%d%d",&s[i].dob.y,&s[i].dob.m,&s[i].dob.d);
        fprintf(f,"%d %d %d",&s[i].dob.y,&s[i].dob.m,s[i].dob.d);
    }
    printf("\n------------------------------------------------------------\n");
    printf("The details of the student not form pokhara\n");
    printf("|%-20s| |%-20s| |%-20s| |%-10s|","Name","Address","Faculty","roll number");
    for(i=0;i<n;i++)
    {
       if(strcmp(s[i].add,"pokhara")!=0)
       {    
            printf("\n|%-20s| |%-20s| |%-20s| |%-10d|",s[i].name,s[i].add,s[i].fclt,s[i].roll);
       }
    }
    fclose(f);
    return 0;
}