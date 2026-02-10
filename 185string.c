#include<stdio.h>
void cpysmallstring(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
        *dest = *src;
        dest++;
        }
        src++;
        
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

    cpysmallstring(arr,brr);
    printf("copy string is : %s\n",brr);


    return 0;
}