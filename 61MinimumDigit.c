//write a program take a one number from user Disply a Minimum digit from this number
#include<stdio.h>
int MinimumDigit(int iValue)
{
    int iDigit = 0;
    int iMin = 9;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iValue = iValue / 10;
        
    }
    return iMin;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value");
    scanf("%d",&iValue);
    iRet = MinimumDigit(iValue);
    printf("Minimum Digit is : %d",iRet);

    return 0;

}