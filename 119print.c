/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    1   &   1   &
    2   &   2   &
    3   &   3   &
    4   &   4   &

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
           if(j % 2 == 0)
           {
            printf("&\t");
           }
           else
           {
            printf("%d\t",i);
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