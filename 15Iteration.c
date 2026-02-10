#include<stdio.h>
void Disply(int iValue)
{
    int icnt = 0;
    if(iValue < 0)
    {
        printf("Invalid input\n");
        printf("Please enter the positive number\n");
    }
    
    for(icnt = 1; icnt <= iValue; icnt++)
    {
        printf("%d\n",icnt);
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