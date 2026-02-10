#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iLength)
{
   
    int iCnt = 0;
    int iMax = Arr[0];
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    return iMax;
   

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
   iRet = Maximum(ptr,iSize);
   printf(" Maximum element is  : %d",iRet);
    

    return 0;

}