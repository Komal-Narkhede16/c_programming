#include<stdio.h>
int calculatePower(int iBase, int iPower)
{
    int iResult = 0;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult + iBase;
    }
    return iResult;
}
int main()
{
    int iBase = 0;
    int iPower = 0;
    int iRet = 0;

    printf("Enter the base\n");
    scanf("%d",&iBase);

    printf("Enter the power\n");
    scanf("%d",&iPower);
    iRet = calculatePower(iBase,iPower);
    printf("the Result is %d",iRet);

    return 0;



}