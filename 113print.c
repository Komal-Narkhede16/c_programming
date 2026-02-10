/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e        
*/  


#include<stdio.h>
void Disply(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1,ch = 'a'; j<=iCol; j++,ch++ )
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