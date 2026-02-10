//write a program take a one number from user check a maximum digit from this number
#include<stdio.h>
int MaximumDigit(int iValue)
{
    int iDigit = 0;
    int iMax = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
            
        }
        iValue = iValue / 10;
        
    }
    return iMax;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value\n");
    scanf("%d",&iValue);
    iRet = MaximumDigit(iValue);
    printf("Maximum Digit is : %d",iRet);

    return 0;

}