#include<stdio.h>
#include<stdbool.h>
bool checkcapital(char cvalue)
{
    if(cvalue >= 65 && cvalue <= 90)
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
    bool bRet = false;
    printf("Enter the character");
    scanf("%c",&cvalue);
   bRet = checkcapital(cvalue);
    if(bRet == true)
    {
        printf("%c is a capital letter",cvalue);
    }
    else
    {
        printf("%c is a not capital letter",cvalue);
    }
    return 0;
}