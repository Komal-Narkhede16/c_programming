
//write a program take a one number from user and Display the reverse number.
#include<stdio.h>
#include<stdbool.h>
int DisplayReverse(int iNo)
{
    int iDigit = 0;
    int temp = iNo;
    
    int iReverse = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo = iNo / 10;
    }

    if(iReverse == temp)
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
    printf("Enter the one number");
    scanf("%d",&iNo);
    
bRet = DisplayReverse(iNo);
if(bRet == true)
{
    printf("%d is a palindrome number",iNo);
}
else
{
    printf("%d is not a palindrome number",iNo);
}

    

    return 0;


}
