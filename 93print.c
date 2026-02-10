// Input : 7
// Output : a   b   c   d   e   f   g

// Input : 3
// Output : a   b   c 


#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    char ch = 'a';
    for(iCnt  = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t ",ch++);
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