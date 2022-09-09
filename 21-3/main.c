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
    struct Employee e;
    printf("Enter your ID : ");
    scanf("%d",&e.id);
    printf("Enter your Name : ");
    fflush(stdin);
    gets(e.name);
    printf("Enter your Salary : ");
    scanf("%d",&e.sal);
    printf("Id : %d\nName : %s\nSalary : %d",e.id,e.name,e.sal);
    return 0;
}
