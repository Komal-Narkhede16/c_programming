#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1
int LastOccurence(int arr[],int iSize, int iValue)
{
    int iCnt = 0;
    int pos = ERR_NOTFOUND; 
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iValue)
        {

            pos = iCnt;

        }
    }
    return pos;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter Size of array: \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the element into array : \n");

    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
    }


    printf("Disply the element into the array : \n");

    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
       printf("%d \n",ptr[iCnt]);
    }

    printf("Enter the value you want to search into array : \n");
    scanf("%d",&iValue);

   iRet =  FirstOccurence(ptr,iSize,iValue);
   if(iRet == ERR_NOTFOUND)
   {
        printf("There is no found value");
   }else
   {
    printf("Element found in index no : %d ",iRet);
   }


      
    return 0;


}