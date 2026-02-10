#include<stdio.h>
void strToggle(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') &&(*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    printf("%s",arr);

    strToggle(arr);
    printf("Edit string is : %s",arr);


    return 0;
}