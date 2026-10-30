//Q2 Assignment2 , Accept one number from user and print that nummber of * on scrren 

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt =0;
    while(iNo1>=iCnt)  
    {
        printf("*");
        iCnt --;
    }
}

int main()
{
    int iValue=0;
    
    printf("Enter your number");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;

}