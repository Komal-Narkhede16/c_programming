
//write a program take a numner from and count the digit frequency.
#include<stdio.h>

int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
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
    int iRet = 0;
    
    int iSearch = 0;
    printf("Enter the number\n");
    scanf("%d",&iNo);
    iRet = CountFrequency(iNo);
    printf("Frequency of number is : %d\n",iRet);
    return 0;



   

}