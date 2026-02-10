#include<stdio.h>
void Disply(int iValue)
{
    int icnt = 0;
    
    
    for(icnt = 1; icnt <= iValue; icnt++)
    {
        printf("%d\t",icnt);
    } 
}
int main()
{
    int iValue = 0;
    printf("Enter the frequency you want to disply the jay ganesh on screen");
    scanf("%d",&iValue);

    Disply(iValue);
    return 0;

}