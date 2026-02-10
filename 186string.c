#include<stdio.h>
void cpyToggle(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
       *dest = *src + 32;
       dest++;
        }
        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
            dest++;
        }
        else
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

    cpyToggle(arr,brr);
    printf("copy string is : %s\n",brr);


    return 0;
}