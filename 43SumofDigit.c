//write a program take a one number from user Disply the sum of digit.
#include<stdio.h>
int DisplyDigit(int iValue)
{
    int iDigit = 0;
    int iSum = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iSum = iSum + iDigit;
        iValue = iValue / 10;

    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the value");
    scanf("%d",&iValue);
    iRet = DisplyDigit(iValue);
    printf("the sum of digit is : %d",iRet);



}