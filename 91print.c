// Input : 7
// Output : 7   6   5   4   3   2   1

// Input : 3
// Output : 3   2   1

#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    for(iCnt  = iNo; iCnt > 0; iCnt--)
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