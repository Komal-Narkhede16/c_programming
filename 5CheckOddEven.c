//write a program take a one number from user check wether this number is odd or even 
#include<stdio.h>
#include<stdbool.h>
bool CheckOddEven(int iValue)
{
    if(iValue % 2 == 0)
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
        printf("%d is even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }



}