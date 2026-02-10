#include<stdio.h>
void strrevX(char *src,char *dest,int iLength)
{
    while(*dest != 0)
    {
        dest++;
    }
    *dest = ' ';
    dest++;
     while(*src != '\0')
     {
        *dest = *src;
        dest++;
        src++;

        iLength--;
        if(iLength == 0)
        {
            break;
        }
     }
     *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20] = "Demo";
    int iNo = 0;
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    printf("Enter the number of element you want to concate");
    scanf("%d",&iNo);

    

    strrevX(arr,brr,iNo);
    printf("concate  string is : %s\n",brr);


    return 0;
}