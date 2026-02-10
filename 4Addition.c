//Write a program take a two number from user and perfrom a addition of two number
#include<stdio.h>
int Addition(int iNo1 , int iNo2)
{
    int iResult = 0;
    iResult = iNo1 + iNo2;
    return iResult;
}
int main()
{
    int iNo1 = 0;
    int iNo2  = 0;
    int iResult = 0;
    printf("Enter the First number");
    scanf("%d",&iNo1);

    print("Enter the second number");
    scanf("%d",&iNo2);
    iResult = Addition(iNo1,iNo2);
    print("%d",iResult);

    return 0;
}