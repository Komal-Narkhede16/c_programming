// Input :  5
// Output : -5  -4  -3  -2  -1    

#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
   

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("-%d \t",iCnt);
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