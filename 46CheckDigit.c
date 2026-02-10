//write a program take a numner from user check a digit are present in the number or not not.
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iNo == 0)
    {
        return false;
    }
    else
    {
        return true;
    }

}
int main()
{
    int iNo = 0;
    bool bRet = 0;
    printf("Enter the number");
    scanf("%d",&iNo);
    bRet = CheckDigit(iNo);
    if(bRet == true)
    {
        printf("8 is present in the %d",iNo);
    }
    else
    {
        printf("8 is not a present in %d",iNo);
    }
    return 0;


}