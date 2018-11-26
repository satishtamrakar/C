#include<stdio.h>
#include<conio.h>
void main()
{
    //variable declaration
    int input;

    //Read value from user
    printf("Enter any number: ");
    scanf("%d",&input);

    //Logic
    if(input%2==0)
        printf("%d is Even Number",input);
    else
        printf("%d is Odd Number",input);

    getch();

}
