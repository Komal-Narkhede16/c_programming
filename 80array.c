#include<stdio.h>
#include<stdlib.h>
#define ERROR_NOTFOUND -1
int Search(int Arr[],int iLength,int iSearch)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iSearch)
        {
           break; 
        }
    }
    
    if(iCnt == iLength)
    {
        return ERROR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iSearch = 0;
    int iRet = 0;
    
    
    printf("Enter the size of array : \n");
    scanf("%d",&iSize);
    ptr = (int *)malloc(iSize * sizeof(int) );
    printf("Enter the element into the array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the value");
    scanf("%d",&iSearch);

    printf("Display the element into array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
   iRet = Search(ptr,iSize,iSearch);
   if(iRet == -1)
   {
    printf("There is no such element found");
   }
   else
   {
    printf("First occurence is : %d",iRet);
   }
   free(ptr);
    

    return 0;

}