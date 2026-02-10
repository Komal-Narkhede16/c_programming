#include<stdio.h>
#include<stdbool.h>
bool checkSmall(char cvalue)
{
    if(cvalue >= 97 && cvalue <= 122)
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
     
    cRet = checkSmall(cvalue);
    if(cRet == true)
    {
        printf("%c is small letter",cvalue);
    }
    else
    {
        printf("%c is not a small letter",cvalue);
    }

    return 0;
}