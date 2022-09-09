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
    e.id=123;
    strcpy(e.name,"Shyam");
    e.sal=5000;
    printf("Id : %d\nName : %s\nSalary : %d",e.id,e.name,e.sal);
    return 0;
}
