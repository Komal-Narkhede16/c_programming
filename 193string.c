#include<stdio.h>
void strrevX(char *src,char *dest,int iLength)
{
    
     while((*src != '\0') && (iLength != 0))
     {
        *dest = *src;
        dest++;
        src++;

        iLength--;
       
     }
     *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    int iNo = 0;
    printf("Enter the string\n");
    scanf("%[^'\n']s",&arr);

    printf("Enter the number of element you want to concate");
    scanf("%d",&iNo);

    

    strrevX(arr,brr,iNo);
    printf("copy  string is : %s\n",brr);


    return 0;
}