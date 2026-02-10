#include<stdio.h>
int strlenchar(char *str)
{
    int icount = 0;
    while(*str != '\0')
    {
        if(*str == 'Z')
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

    iRet = strlenchar(arr);

    printf("count length of character : %d",iRet);
    
    return 0;
}