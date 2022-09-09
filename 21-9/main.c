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
    int n;
    printf("How many students you want to enter : ");
    scanf("%d",&n);
    struct Marks m[n];

    for(int i=0;i<n;i++)
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

    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d",i+1);
        printf("\nRoll No. : %d\nName : %s\nPercentage : %.2f",m[i].rollno,m[i].name,m[i].per);
    }
    return 0;
}
