// Write a program take a one input from user check wether this number is divisible by 5 or 7
#include<stdio.h>
#include<stdbool.h>
bool CheckOddEven(int iValue)
{
    if(iValue % 5 == 0 && iValue % 7 == 0)
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
    bool bResult = false;
    printf("Enter the value\n");
    scanf("%d",&iValue);
    bResult = CheckOddEven(iValue);
    if(bResult == true)
    {
        printf(" %d Divisible by  5 and 7 ",iValue);
    }
    else
    {
        printf("%d is not Divisible by 5 and 7",iValue);
    }



}