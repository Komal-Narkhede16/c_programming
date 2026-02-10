/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    *   a   a   a   a   a
    b   *   b   b   b   b
    c   c   *   c   c   c
    d   d   d   *   d   d   
    e   e   e   e   *   e
    f   f   f   f   f   *         
*/  



#include<stdio.h>
void Disply(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    for(i = 1,ch = 'a'; i<=iRow; i++,ch++)
    {
        for(j = 1; j<=iCol; j++ )
        {
          if(i == j)
           {
            printf("*\t");
           }
           else
           {
            printf("%c\t",ch);
           }
          
        }
        printf("\n");
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

