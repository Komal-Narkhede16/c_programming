#include<stdio.h>
int strlenVowelsX(char *str)
{
    int icount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = strlenVowelsX(arr);

    printf("count length of space : %d",iRet);
    
    return 0;
}