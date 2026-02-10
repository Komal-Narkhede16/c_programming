
//write a program take a one number from user and take a digit from
// user check the digit is how many time present in this number.
#include<stdio.h>
int CountFrequency(int iNo,int iSearch)
{
    int iDigit = 0;
    
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCount++;

        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iNo = 0;
    int iSearch = 0;
    int iRet = 0;
    printf("Enter the one number");
    scanf("%d",&iNo);
    printf("Enter the isearch");
    scanf("%d",&iSearch);
    iRet = CountFrequency(iNo,iSearch);
    printf("Frequency is : %d",iRet);

    return 0;


}
