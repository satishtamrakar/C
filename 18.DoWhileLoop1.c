#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   int a, b, sum;
   do
   {
       printf("Enter first number:");
       scanf("%d",&a);
       printf("Enter second number:");
       scanf("%d",&b);
       sum=a+b;
       printf("Sum of %d and %d is %d",a,b,sum);
       printf("\n\n\nDo you want to add another set (y/n):");
       scanf(" %c",&ch);
   }
   while(ch=='y');
}
