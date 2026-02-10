#include<stdio.h>
int DisplyFactor(int iValue)
{
    int icnt = 0;
    int iFact = 1;
    if(iValue < 0)
    {
        printf("please enter the positive value\n");
        return 0;

    }
    icnt = iValue/2;
    
    while(icnt >= 1)
    {
        if(iValue % icnt == 0)
        {
            printf("%d\t",icnt);
            
        }
        icnt--;
    } 
    
}
int main()
{
    int iValue = 0;
    printf("Enter the frequency you want to disply the jay ganesh on screen\n");
    scanf("%d",&iValue);

     DisplyFactor(iValue);
    

}