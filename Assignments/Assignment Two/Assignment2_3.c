//Q2 Assignment2 , Accept one number from user and print that nummber of * on scrren 

#include<stdio.h>

void Display(int iNo1)
{
    
    while(iNo1 > 0) 
    { 
        printf("*");
        iNo1 --;
    }
}

int main()
{
    int iValue=0;
    
    printf("Enter your number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}