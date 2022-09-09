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
    struct Employee e[10],temp;
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

    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(e[i].sal>e[j].sal)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("\nID : %d\nName : %s\nSalary : %d",e[i].id,e[i].name,e[i].sal);
    return 0;
}
