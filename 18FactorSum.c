#include<stdio.h>
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
int main()
{
    int iValue = 0;
    int iSumation = 0;
    printf("Enter the Value");
    scanf("%d",&iValue);

    iSumation = DisplyFactor(iValue);
    printf("Sumation of factor : %d",iSumation);
    return 0;

}