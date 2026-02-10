/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    *   *   *   *   *   *
    &   &   &   &   &   &
    &   &   &   &   &   &
    &   &   &   &   &   &
    &   &   &   &   &   &
    &   &   &   &   &   &
    *   *   *   *   *   *
                    
*/  



#include<stdio.h>
void Disply(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++ )
        {
           if(i == 1|| i == iRow)
           {
            printf("*\t");
           }
           else
           {
            printf("&\t");
           }
        }
        printf("\n");
    }

}
int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter the row");
    scanf("%d",&iRow);

    printf("Enter the coloumn");
    scanf("%d",&iCol);
    Disply( iRow, iCol);
    return 0;
}

