#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5];
    int iCnt = 0;
    printf("Enter the element into array\n");
    for(iCnt = 0; iCnt<5; iCnt++)
    {
        scanf("%d",&arr[iCnt]);
    }
    printf("Element of array are:  \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",arr[iCnt]);
    }
    return 0;
}