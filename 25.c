#include<stdio.h>
#include<string.h>
struct lecturer{
    char name[30];
    char sub[30];
    int salary;
    struct add{
        char city[30];
        char state[30];
        char country[30];
    }ad;
    struct date{
        int d;
        int m;
        int y;
    }dob;
};
int main()
{
    int n,i,j;
    printf("enter the number of lecturer\n");
    scanf("%d",&n);
    struct lecturer lec[n],temp;
    printf("enter the details\n");
    for(i=0;i<n;i++)
    {
        printf("enter name salary and subject for lecturer %d",i+1);
        scanf("%s%d%s",lec[i].name,&lec[i].salary,lec[i].sub);
        printf("enter the address as city state and country\n");
        scanf("%s%s%s",lec[i].ad.city,lec[i].ad.state,lec[i].ad.country);
        printf("enter date of birth as day month and year\n");
        scanf("%d%d%d",&lec[i].dob.d,&lec[i].dob.m,&lec[i].dob.y);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(lec[i].name,lec[j].name)>0)
            {
                temp=lec[i];
                lec[i]=lec[j];
                lec[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\nLecturer %d\n",i+1);
        printf("Name=%s\tSubject=%s\tAddress= %s %s %s\t DOB=%d/%d/%d\tSalary=%d",lec[i].name,lec[i].sub,lec[i].ad.city,lec[i].ad.state,lec[i].ad.country,lec[i].dob.d,lec[i].dob.m,lec[i].dob.y,lec[i].salary);
    }
    return 0;
}