#include<stdio.h>
int Frequency(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);
    printf("%s\n",&arr);

    iRet = Frequency(arr);
    printf("Small letter is : %d\n",iRet);

    
    return 0;
}