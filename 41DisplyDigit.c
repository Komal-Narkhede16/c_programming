//write a program take a one number from user disply this in reverse.
#include<stdio.h>
void DisplyDigit(int iValue)
{
    int iDigit = 0;
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        printf("%d",iDigit);
        iValue = iValue / 10;

    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value");
    scanf("%d",&iValue);
    DisplyDigit(iValue);


}