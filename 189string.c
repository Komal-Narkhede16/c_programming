#include<stdio.h>
void strrevX(char *src,char *dest)
{
    while(*dest != 0)
    {
        dest++;
    }
     while(*src != '\0')
     {
        *dest = *src;
        dest++;
        src++;
     }
     *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20] = "Demo";
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    printf("%s\n",arr);

    strrevX(arr,brr);
    printf("concate  string is : %s\n",brr);


    return 0;
}