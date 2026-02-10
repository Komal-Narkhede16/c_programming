/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    *   *   *   *   *
    *   *   *   *   *
    *   *   *   *   *    

*/  

#include<stdio.h>
void Disply(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 0; i<iRow; i++)
    {
        for(j = 0; j<iCol; j++ )
        {
            printf("*\t");
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