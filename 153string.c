#include<stdio.h>
#include<stdbool.h>
bool checkDigit(char cvalue)
{
    if(cvalue >= '0' && cvalue <= '9')
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
    char cvalue = '\0';
    bool cRet = false;

    printf("Enter the character");
    scanf("%c",&cvalue);
     
    cRet = checkDigit(cvalue);
    if(cRet == true)
    {
        printf("%c is Digit",cvalue);
    }
    else
    {
        printf("%c is not a Digit",cvalue);
    }

    return 0;
}