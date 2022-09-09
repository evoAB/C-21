#include <stdio.h>
#include <stdlib.h>
struct Time
{
    int sec;
    int min;
    int hrs;
};
int main()
{
    struct Time s, e, diff;
    printf("Enter starting time :\n");
    printf("Enter hour, minutes and seconds : ");
    scanf("%d%d%d",&s.hrs,&s.min,&s.sec);
    printf("Enter ending time :\n");
    printf("Enter hour, minutes and seconds : ");
    scanf("%d%d%d",&e.hrs,&e.min,&e.sec);

    if(e.sec>s.sec)
    {
        --s.min;
        s.sec+=60;
    }
    if(e.min>s.min)
    {
        --s.hrs;
        s.min+=60;
    }
    diff.hrs=s.hrs-e.hrs;
    diff.min=s.min-e.min;
    diff.sec=s.sec-e.sec;

    printf("\nTime Difference = %d:%d:%d",diff.hrs,diff.min,diff.sec);
    return 0;
}
