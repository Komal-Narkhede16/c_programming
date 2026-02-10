#include<stdio.h>
int strlencapitalX(char *str)
{
    int icount = 0;
    while(*str != '\0')
    {
        if(((*str >= 'A') && (*str <= 'Z')))
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

    iRet = strlencapitalX(arr);

    printf("string length of capital letter  : %d",iRet);
    
    return 0;
}