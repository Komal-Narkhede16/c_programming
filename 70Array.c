#include<stdio.h>
#include<stdlib.h>
int CountOdd(int Arr[],int iLength)
{
    int iCnt = 0;int iSum = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }
    return iCount;

}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    
    printf("Enter the size of array : \n");
    scanf("%d",&iSize);
    ptr = (int *)malloc(iSize * sizeof(int) );
    printf("Enter the element into the array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Display the element into array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
   iRet = CountOdd(ptr,iSize);
   printf(" Count of Odd number is : %d",iRet);
    

    return 0;

}