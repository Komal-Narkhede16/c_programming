//write a program take a two number from user and perfrom the addition of two number
#include<stdio.h>
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iResult = 0;
    
    printf("Enter first number ");
    scanf("%d",&iNo1);

    printf("Enter the second number");
    scanf("%d",&iNo2);

    iResult = iNo1 + iNo2;

    printf("Addition of two number is : %d",iResult);

    return 0;



}