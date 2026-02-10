// Input : 7
// Output : a   1   b   2   c   3   d   4   e   5   f   6   g   7

// Input : 3
// Output : a   1   b   2   c   3 


#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    char ch = 'a';
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