/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    A
    A   B
    A   B   C
    A   B   C   D
    A   B   C   D   E
    A   B   C   D   E   F             
*/  


#include<stdio.h>
void Disply(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1, ch = 'A'; j<=i; j++,ch++ )
        {
          if(i >= j)
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

