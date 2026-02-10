#include<stdio.h>
int strlensmallX(char *str)
{
    int icount = 0;
    while(*str != '\0')
    {
        if(((*str >= 'a') && (*str <= 'z')))
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

    iRet = strlensmallX(arr);

    printf("string length of small letter  : %d",iRet);
    
    return 0;
}