#include<stdio.h>
#include<math.h>

void main()
{
    int s,rows,spr;
    printf("enter no of seats :\n");
    scanf("%d",&s);
    printf("enter no of rows :\n");
    scanf("%d",&rows);
    spr=s/rows;
    printf("seats per row =%d",spr);
}

