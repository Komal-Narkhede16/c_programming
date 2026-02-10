#include<stdio.h>
#include<stdlib.h>
int LastOccurence(int arr[],int iSize,int iValue)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iValue)
        {
            break;
        }
    }
     
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    int *ptr = NULL;
    int iRet = 0;
    printf("Enter the size of array : ");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the element into the array");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    printf("Enter the value you want to search into array : \n");
    scanf("%d",&iValue);

    iRet =  LastOccurence(ptr,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no element found");
    }
    else
    {
        printf("The element found in index number : %d ",iRet);
    }




    return 0;
}