#include<stdio.h>
#include<conio.h>
/*******************************************************************
Author: Satish Tamrakar
Purpose: To read the two number from user and print sum and average
********************************************************************/
void main()
{
    int fn, sn, sum;
    float average;

    //read values from user
    printf("Enter first number:");
    scanf("%d",&fn);
    printf("Enter second number:");
    scanf("%d",&sn);

    //logic
    sum=fn+sn;
    average=sum/2.0;

    printf("Sum=%d, Average=%f",sum,average);
    getch();
}
