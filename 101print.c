// Input :  7
// Output : 2   4   6   8   10  12  14

#include<stdio.h>
void Disply(int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d \t",iCnt * 2);
    }
}
int main()
{
    int iFrequency = 0;
    printf("Enter the frequency");
    scanf("%d",&iFrequency);
    Disply(iFrequency);
    return 0;
}