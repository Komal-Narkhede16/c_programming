/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c
*/

#include<stdio.h>
void Disply(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    for(i = 1,ch = 'A'; i<=iRow; i++,ch++)
    {
        for(j = 1; j<=iCol; j++ )
        {
            printf("%c\t",ch);
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