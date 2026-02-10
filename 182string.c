#include<stdio.h>
void strToggle(char *str)

{
    int gap = 'a' - 'A';
    while(*str != '\0')
    {
        if((*str >= 'A') &&(*str <= 'Z'))
        {
            *str = *str + gap;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - gap;
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