//write a program take a one number from user count the digit.
#include<stdio.h>
int DisplyDigit(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iCnt++;
        iValue = iValue / 10;

    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the value");
    scanf("%d",&iValue);
    iRet = DisplyDigit(iValue);
    printf("Number of digit in value is : %d",iRet);



}