#include <stdio.h>
#include <stdlib.h>

struct Marks
{
    int rollno;
    char name[20];
    float cm,mm,pm;
};
int main()
{
    struct Marks m[5];

    for(int i=0;i<5;i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter roll no. : ");
        scanf("%d",&m[i].rollno);
        printf("Enter name : ");
        fflush(stdin);
        gets(m[i].name);
        printf("Enter Chemistry marks : ");
        scanf("%f",&m[i].cm);
        printf("Enter Maths marks : ");
        scanf("%f",&m[i].mm);
        printf("Enter Physics marks : ");
        scanf("%f",&m[i].pm);
    }

    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d",i+1);
        printf("Percentage : %f",(m[i].cm+m[i].mm+m[i].pm)/3);
    }
    return 0;
}
