//write a program take a numner from user check a digit are present in the number or not not.
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(int iNo,int iSearch)
{
    int iDigit = 0;
    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Please enter between range(0 to 9)");
        return false;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == iSearch)
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
    int iNo = 0;
    bool bRet = false;
    int iSearch = 0;
    printf("Enter the number");
    scanf("%d",&iNo);

    printf("Enter the digit you want to search range between(0 to 9)");
    scanf("%d",&iSearch);

    bRet = CheckDigit(iNo,iSearch);
    if(bRet == true)
    {
        printf("%d is present in the %d",iSearch,iNo);
    }
    else
    {
        printf("%d is not a present in %d",iSearch,iNo);
    }
    return 0;


}