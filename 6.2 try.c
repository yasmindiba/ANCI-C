#include<stdio.h>
#define COLMAX10
#define ROWMAX12
int main()
{    int row,column,y;
     int ROWMAX , COLMAX;
     row=1;;
     printf("multiple table : \n");
     do{
        column=1;
        do
        {
            y=row*column;
            printf("%4d",y);
            column=column+1;
        }
        while(column<=COLMAX);
        printf("\n");
        row=row+1;

     }
     while(row<=ROWMAX);
}
