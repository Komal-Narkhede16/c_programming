// Input : 7
// Output : A   A   A   A   A   A   A   

// Input : 3
// Output : A   A   A 

#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    for(iCnt  = 0; iCnt < iNo; iCnt++)
    {
        printf("#\t");
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