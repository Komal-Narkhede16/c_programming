#include<stdio.h>
int  DisplyFactor(int iValue)
{
    int icnt = 0;
    int iMult = 0;
    if(iValue < 0)
    {
        iValue = -iValue;

    }
    
    for(icnt = (iValue/2); icnt >= 1; icnt--)
    {
        if(iValue % icnt == 0)
        {
            iMult = iMult + icnt;
        }
    } 
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the frequency you want to disply the jay ganesh on screen\n");
    scanf("%d",&iValue);

    iRet = DisplyFactor(iValue);
    printf("Multiplication  of factor is : %d\n",iRet);
    return 0;

}