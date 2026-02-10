#include<stdio.h>
int main()
{
    printf("ASCI Table\n");
    int iCnt = 0;
    for(iCnt = 0; iCnt < 127; iCnt++)
    {
        printf("%d \t %c\n",iCnt , iCnt);
    }
    return 0;
}