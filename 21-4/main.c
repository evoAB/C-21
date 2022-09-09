#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id;
    char name[20];
    int sal;
};
int main()
{
    struct Employee e[10],high;
    printf("Enter Employee Details :");
    for(int i=0;i<10;i++)
    {
        printf("\nEnter your ID : ");
        scanf("%d",&e[i].id);
        printf("Enter your Name : ");
        fflush(stdin);
        gets(e[i].name);
        printf("Enter your Salary : ");
        scanf("%d",&e[i].sal);
    }

    high.sal=0;

    for(int i=0;i<10;i++)
    {
        if(high.sal<e[i].sal)
            high=e[i];
    }
    printf("\nHighest salary employee : ");
    printf("\nID : %d\nName : %s\nSalary : %d",high.id,high.name,high.sal);
    return 0;
}
