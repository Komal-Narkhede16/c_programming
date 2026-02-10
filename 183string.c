#include<stdio.h>
void cpystring(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    
}
int main()
{
    char arr[20];
    char brr[20];
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    printf("%s\n",arr);

    cpystring(arr,brr);
    printf("copy string is : %s\n",arr);


    return 0;
}