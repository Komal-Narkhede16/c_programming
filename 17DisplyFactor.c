#include<stdio.h>
void DisplyFactor(int iValue)
{
    int icnt = 0;
    
    for(icnt = 1; icnt <= iValue/2; icnt++)
    {
        if(iValue % icnt == 0)
        {
            printf("%d\n",icnt);
        }
    } 
}
int main()
{
    int iValue = 0;
    printf("Enter the frequency you want to disply the jay ganesh on screen");
    scanf("%d",&iValue);

    DisplyFactor(iValue);
    return 0;

}