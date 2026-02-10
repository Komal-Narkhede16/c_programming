#include<stdio.h>
int CalculatePower(int iBase,int iPower)
{
    int iResult = 1;
    int iCnt = 0;
    while(iCnt < iPower)
    {
        iResult = iResult * iBase;
        iCnt++;

    }
    return iResult;
}
int iCnt = 0;

int main()
{
    int iBase = 0;
    int iPower = 0;
    int iResult = 0;

    printf("Enter the base");
    scanf("%d",&iBase);
    printf("Enter the power");
    scanf("%d",&iPower);
    iResult = CalculatePower(iBase,iPower);
    printf("Calculation is %d",iResult);


    return 0;
}