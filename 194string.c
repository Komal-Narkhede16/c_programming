
#include<stdio.h>
#include<stdbool.h>
bool strcmpX(char *str1,char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;

    }

    if((*str1 == '\0') && (*str2 == '\0'))
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
    char arr[20];
    char brr[20];
    bool bret = false;
    printf("Enter the first string");
    scanf("%[^'\n']s",&arr);

    printf("Enter the second string");
    scanf(" %[^'\n']s",&brr);
    bret = strcmpX(arr,brr);
    if(bret == true)
    {
        printf("String is identical");
    }
    else
    {
        printf("String is not a identical");
    }
    return 0;
}