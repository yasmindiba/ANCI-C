#include<stdio.h>
int main()
{
    int n,i, sum=0;
    scanf("%d" ,&n);
    while(n>0)
    {   sum=sum*10+n%10;
        n=n/10;
    }
    printf("%d" ,sum);
}
