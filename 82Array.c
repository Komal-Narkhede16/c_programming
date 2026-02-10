#include<stdio.h>
#include<stdlib.h>
#define ERROR_NOTFOUND -1

int Search(int Arr[],int iLength,int iSearch)
{
    int iCnt = 0;
    for(iCnt = iLength; iCnt > 0; iCnt--)
    {
        if(Arr[iCnt] == iSearch)
        {
           break; 
        }
    }
    return iCnt;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iSearch = 0;
    int bRet = 0;
    
    
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
   bRet = Search(ptr,iSize,iSearch);
  
    if(bRet == ERROR_NOTFOUND)
    {
        printf("There is no such a element");
    }
    else
    {
        printf("%d is present in index no: %d",iSearch,bRet);
    }

    return 0;

}