
//write a program take a one number from user and Display the reverse number.
#include<stdio.h>
int DisplayReverse(int iNo)
{
    int iDigit = 0;
    
    int iReverse = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iReverse;
    
}
int main()
{
    int iNo = 0;
    
    int iRet = 0;
    printf("Enter the one number");
    scanf("%d",&iNo);
    
iRet = DisplayReverse(iNo);
printf("Reverse Number is : %d",iRet);
    

    return 0;


}
