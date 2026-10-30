// accept one number from user and print that number of * in screen
#include<stdio.h>

void Display(int iNo1)
{
    int iCnt=0;
    while ((iCnt<=iNo1))
    {
       printf("*");
       iCnt++;
    }
    
}

int main()
{
    int iValue =0;

    printf("enter the number");
    scanf("%d:\n",&iValue);

    Display(iValue);

    return 0;
}