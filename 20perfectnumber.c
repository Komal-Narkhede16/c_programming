#include<stdio.h>
#include<stdbool.h>

int DisplyFactor(int iValue)
{
    int icnt = 0;
    int iSum = 0;
    printf("Disply factor\n");
    for(icnt = 1; icnt <= iValue/2; icnt++)
    {
        if(iValue % icnt == 0)
        {
            printf("%d\n",icnt);
            iSum = iSum + icnt;
        }
    }
    return iSum;
}
bool CheckPerfect(int iValue)
    { 
        int iSum = 0;
        iSum = DisplyFactor(iValue);
        printf("sumation of factor is %d\n",iSum);

    if(iSum == iValue)
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
bool bRet = 0;
    printf("Enter the Value");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }
    return 0;

}