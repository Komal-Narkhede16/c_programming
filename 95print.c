// Input : 7
// Output : a   b   c   d   e   f   g

// Input : 3
// Output : a   b   c 


#include<stdio.h>
void Disply(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt  = 0, ch = 'a'; iCnt < iNo; iCnt++,ch++)
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