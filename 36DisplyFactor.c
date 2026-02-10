#include<stdio.h>
int  DisplyFactor(int iValue)
{
    int icnt = 0;
    int iFact = 1;
    if(iValue < 0)
    {
        printf("please enter the positive value\n");
        return 0;

    }
    icnt = 1;
    
    while(icnt <= iValue/2)
    {
        if(iValue % icnt == 0)
        {
            iFact = iFact * icnt;
            
        }
        icnt++;
    } 
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the frequency you want to disply the jay ganesh on screen\n");
    scanf("%d",&iValue);

    iRet = DisplyFactor(iValue);
    printf("Sumation  of factor is : %d\n",iRet);
    return 0;

}