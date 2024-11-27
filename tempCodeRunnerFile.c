#include<stdio.h>
void ascii();
void sum();
int main()
{
    int i=1,n;
    do{
        printf("\n----------MENU-----------");
        printf("\n1.ascii to character");
        printf("\n2.sum of natural numbers");
        printf("\n3.Exit");
        printf("\nENter a number");
        scanf("%d",&n);
        switch (n){
            case 1:
            ascii();
            break;
            case 2:
            sum();
            break;
            case 3:
            i=0;
            printf("EXITED");
            break;
        }
    }while(i!=0);
}
void ascii()
{
    int a;
    printf("enter the ascii value");
    scanf("%d",&a);
    printf("Corresponting chararacter is %c",a);
}
void sum()
{
    int a,i,sum=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);

}
