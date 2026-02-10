#include<stdio.h>
int strlenchar(char *str,char cvalue)
{
    int icount = 0;
    while(*str != '\0')
    {
        if(*str == cvalue)
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
     char cvalue = '\0';
    int   iRet = 0;
   
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    fflush(stdin);
    
    printf("Enter the characater\n");
    scanf(" %c",&cvalue);

    iRet = strlenchar(arr,cvalue);

    printf("count length of space : %d",iRet);
    
    return 0;
}