#include<stdio.h>
int strlenDigitX(char *str)
{
    int icount = 0;
    while(*str != '\0')
    {
        if(((*str >= '0') && (*str <= '9')))
        {
            icount++;
            
        }

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

    iRet = strlenDigitX(arr);

    printf("string length of Digit  : %d",iRet);
    
    return 0;
}