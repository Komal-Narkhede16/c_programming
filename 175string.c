#include<stdio.h>
int Frequency(char *str)
{
    int iCount = 0;
    int iCount1 = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCount1++;
        }
        str++;
    }
    printf(" count frequency capital letter is : %d\n",iCount);
    printf(" count frequency small letter is : %d\n",iCount1++);

}
int main()
{
    char arr[20];
    
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);
    printf("%s\n",&arr);

    Frequency(arr);
    

    
    return 0;
}