#include<stdio.h>
#include<string.h>


int main()
{
    char arr[20];
    int   iRet = 0;
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    iRet = strlen(arr);

    printf("string length is  : %d",iRet);
    
    return 0;
}