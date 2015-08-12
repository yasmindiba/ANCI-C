#include<stdio.h>
#include<math.h>
//#define COLMAX10
//#define ROWMAX12
 main()
{
    int row , column ,ROWMAX,COLMAX;
    int y;
    scanf("%d" , &ROWMAX);
    scanf("%d" ,&COLMAX);
    printf("show the multiple: \n");
    for(row=1;row<=ROWMAX;row++)
    {
        for(column=1;column<=COLMAX;column++)
        {
        y=row*column;

    printf("%4d" , y);
        }

    printf("\n");
    }
    return 0;
}

