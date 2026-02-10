// Input : 7
// Output : A   B   C   D   E   F   G

// Input : 3
// Output : A   B   D 


#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt  = 0, ch = 'A'; iCnt < iNo; iCnt++,ch++)
    {
        printf("%c\t ",ch);
        
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