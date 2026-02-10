#include<stdio.h>
#define ERR_NOTFOUND -1
int LastOccurence(char *str,char cvalue)
{
    int icnt = 1;
    int ipos = ERR_NOTFOUND;

   while(*str != '\0')
   {
    if(*str == cvalue)
    { 
        ipos = icnt;
        
    }
    str++;
    icnt++;
   }
   return ipos;
}
int main()
{
    char arr[20];
    char cvalue = '\0';
    int iRet = 0;
    printf("Enter the string : \n");
    scanf("%[^'\n']s",&arr);

    printf("Enter the one character you want to search into the string : \n");
    scanf(" %c",&cvalue);
    iRet = LastOccurence(arr,cvalue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element found");
    }
    else
    {
        printf("character found in index number : %d",iRet);
    }

    return 0;
}