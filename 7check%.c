//write a program take a marks from user disply its grade.
#include<stdio.h>
void DisplyClass(float fMarks)
{
    if ((fMarks > 100.00f) || (fMarks < 0.00f))
    {
        printf("Invalid input");
        printf("Please enter the mark between 0 to 100");
        return;
    }

    if(fMarks > 0.00f && fMarks <= 34.00f)
    {
        printf("You are fail");
    }
    else if(fMarks >= 35.00f && fMarks <= 50.00f)
    {
        printf("You are Pass ");
    }
    else if(fMarks >= 51.00f && fMarks <= 60.00f)
    {
        printf("you are Second class pass");
    }
    else if(fMarks >= 60.00f && fMarks <= 75.00f)
    {
        printf("You are first class pass");
    }
    else if(fMarks >= 75.00f && fMarks <= 100.00f)
    {
        printf("You are pass first class with destinction");
    }
}
int main()
{
    float fMark = 0.00f;
    printf("Enter the marks");
    scanf("%f",&fMark);
    DisplyClass(fMark);

    return 0;
}