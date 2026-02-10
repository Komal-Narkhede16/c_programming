// Input : 7
// Output : A   1   B   2   C   3   D   4   E   5   F   6   G   7

// Input : 3
// Output : A   1   B   2   C   3 


#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt  = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t %d \t ",ch,iCnt);
        ch++;
        
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