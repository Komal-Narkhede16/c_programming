#include<stdio.h>
unsigned long int calculatePower(int iBase, int iPower)
{
    unsigned int iResult = 1;
    int iCnt = 0;
    if((iBase < 0) || (iPower < 0))
    {
        return 0;
    }

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}
int main()
{
    int iBase = 0;
    int iPower = 0;
    unsigned long int iRet = 0;

    printf("Enter the base\n");
    scanf("%d",&iBase);

    printf("Enter the power\n");
    scanf("%d",&iPower);
    iRet = calculatePower(iBase,iPower);
    printf("the Result is %d",iRet);

    return 0;



}