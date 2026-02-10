//write a program take a one number from user disply digit by using the for loop.
#include<stdio.h>
void DisplyDigit(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
   for(; iValue != 0; iValue = iValue / 10)
   {
    iDigit = iValue % 10;
    printf("%d",iDigit);
   }
    
}
int main()
{
    int iValue = 0;
    
    printf("Enter the value");
    scanf("%d",&iValue);
    DisplyDigit(iValue);
    



}