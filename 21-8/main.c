#include <stdio.h>
#include <stdlib.h>

struct Marks
{
    int rollno;
    char name[20];
    float per;
};
int main()
{
    struct Marks m[10];

    for(int i=0;i<10;i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter roll no. : ");
        scanf("%d",&m[i].rollno);
        printf("Enter name : ");
        fflush(stdin);
        gets(m[i].name);
        printf("Enter Percentage : ");
        scanf("%f",&m[i].per);
    }

    for(int i=0;i<10;i++)
    {
        printf("\nStudent %d",i+1);
        printf("\nRoll No. : %d\nName : %s\nPercentage : %.2f",m[i].rollno,m[i].name,m[i].per);
    }
    return 0;
}
