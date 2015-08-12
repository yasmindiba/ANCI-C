#include<stdio.h>
int main()
{
    int n,reminder;
    scanf("%d" ,&n);
    while(n>0)
    {
        reminder =n%10;
        n=n/10;
        printf("%d" ,reminder);
    }

    return 0;
}
