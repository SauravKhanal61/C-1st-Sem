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
    struct student s;
    FILE *f;
    f=fopen("student.dat","ab");
    if(f==NULL)
    {
        printf("file not found");
        return 1;
    }
    printf("data from file\n");
    while(fscanf(f,"%s %s %s %d %d %d %d",s.name,s.add,s.fclt,&s.roll,&s.dob.y,&s.dob.m,&s.dob.d)==7){
        printf("Name:%s\nAddress=%s\nFaculty:%s\nDOB:%d/%d/%d\n\nROllnum=%d\n",s.name,s.add,s.fclt,s.dob.y,s.dob.m,s.dob.d,s.roll);
    }
}