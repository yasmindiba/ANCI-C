#include<stdio.h>
int main()
{
    int n;
    long int p;
    double q;
    p=1;
    for(n=0;n<21;++n)
    {
        if(n==0)
            p=1;
        else
            p=p*2;
        q=1.0/ (double )p;
        printf("%10ld %10d %20lf\n",p,n,q);
    }
}
