// Input : 7
// Output : 0   1   2   3   4   5   6

// Input : 3
// Output : 0   1   2


#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    for(iCnt  = 0; iCnt < iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iFrequency = 0;
    printf("Enter the frequency : \n");
    scanf("%d",&iFrequency);
    Disply(iFrequency);

    return 0;
}