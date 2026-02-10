#include<stdio.h>
#include<stdbool.h>
bool checkcapital(char cvalue)
{
    if(cvalue >= 'A' && cvalue <= 'Z')
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
     
    cRet = checkcapital(cvalue);
    if(cRet == true)
    {
        printf("%c is capital letter",cvalue);
    }
    else
    {
        printf("%c is not a capital letter",cvalue);
    }

    return 0;
}