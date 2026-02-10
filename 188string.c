#include<stdio.h>
void strrevX(char *src,char *dest)
{
    int iLength = 0;
    while(*src != '\0')
    {
        src++;
        iLength++;    
    }
    src--;
    for(; iLength != 0; iLength--)
    {
        *dest = *src;
        src--;
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

    strrevX(arr,brr);
    printf("copy string is : %s\n",brr);


    return 0;
}