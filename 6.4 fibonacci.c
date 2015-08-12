#include<stdio.h>
int main()
         {
             int n,a,b,c;
             n=50;
             a=0;
             b=1;
            while(a<=50)
             {   printf("%d\n",a);
                 c=a+b;
                 a=b;
                 b=c;

             }
             return 0;


         }
