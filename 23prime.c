#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iValue)
{
    int iCnt = 0;
    bool bFlag = true;
    for(iCnt = 2; iCnt <= (iValue/2);iCnt++)
    {
        if((iValue % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt == (iValue/2) + 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the one number");
    scanf("%d",&iValue);
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number",iValue);
    }
    else
    {
        printf("%d is not a prime number",iValue);
    }


}