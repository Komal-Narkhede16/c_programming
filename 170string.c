#include<stdio.h>
#define ERR_NOTFOUND -1


int FirstOccurence(char *str,char cvalue)
{
    int icnt = 1;
    int ipos = ERR_NOTFOUND;

   while((*str != '\0')&&(*str != cvalue))
   {
    
    str++;
    icnt++;
   }

   if(*str == '\0')
   {
    return ERR_NOTFOUND;
   }
   else
   {
    return icnt;
   }
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
    iRet = FirstOccurence(arr,cvalue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is a no such element found");
    }
    else
    {
        printf("First occurence is found index no : %d ",iRet);
    }



    return 0;
}