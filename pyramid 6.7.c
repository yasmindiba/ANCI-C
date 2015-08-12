#include<stdio.h>
int main()
{
    int i,j,k,m;
    for(i=0;i<4;i++)
    {
        for(m=0;m<=4-i;m++)
        {
            printf("  ");
        }
        for(j=i;j>=0;j--)
        {
            printf("%2d" , j);
        }
        for(k=1;k<=i;k++)
        {
            printf("%2d" ,k);
        }
        printf("\n");
    }
    return 0;
}
