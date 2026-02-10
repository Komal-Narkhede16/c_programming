#include<stdio.h>
int LastOccurence(char *str,char cvalue)
{
    int icnt = 1;
    int ipos = 0;

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

    printf("LastOccurence appear at a index no : %d ",iRet);



    return 0;
}