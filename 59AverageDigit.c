
//write a program take a one number from user and Display the reverse number.
#include<stdio.h>
float AverageOfDigit(int iNo)
{
    int iDigit = 0;
    
    int iSum = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }

    return ((float)iSum / (float)iCount);
    
}
int main()
{
    int iNo = 0;
    
    float fRet = 0.0f;
    printf("Enter the one number");
    scanf("%d",&iNo);
    
fRet = AverageOfDigit(iNo);
printf("Average of digit: %f",fRet);
    

    return 0;


}
