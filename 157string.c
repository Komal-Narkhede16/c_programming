#include<stdio.h>
int strlenX(char *str)
{
    int icount = 0;
    while(*str != '\0')
    {
        icount++;
        str++;
    }

    return icount;
    

}

int main()
{
    char arr[20];
    int   iRet = 0;
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    iRet = strlenX(arr);

    printf("string length is  : %d",iRet);
    
    return 0;
}