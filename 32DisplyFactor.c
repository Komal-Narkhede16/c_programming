#include<stdio.h>
int  DisplyFactor(int iValue)
{
    int icnt = 0;
    int iSum = 0;
    
    for(icnt = (iValue/2); icnt >= 1; icnt--)
    {
        if(iValue % icnt == 0)
        {
            iSum = iSum + icnt;
        }
    } 
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the frequency you want to disply the jay ganesh on screen");
    scanf("%d",&iValue);

    iRet = DisplyFactor(iValue);
    printf("Sumation of factor is : %d",iRet);
    return 0;

}