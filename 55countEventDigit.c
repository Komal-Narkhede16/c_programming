
//write a program take a one number from user calulate the frequency of even digit
#include<stdio.h>
int CountFrequency(int iNo)
{
    int iDigit = 0;
    
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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
    printf("Enter the one number");
    scanf("%d",&iNo);
    
    iRet = CountFrequency(iNo);
    printf("Count the even digit Frequency is : %d",iRet);

    return 0;


}
