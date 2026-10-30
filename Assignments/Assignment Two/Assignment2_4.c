//Q4 Accept two number from user and display first number in second number of times
/*
  input    12 ,5
  output   12 12 12 12 12

  input    8 , 4
  output   8,8,8,8,
    
*/

#include<stdio.h>
void Display (int iNo, int frequency)
{
    int Icnt = 0;

    for(Icnt=1; Icnt<=frequency; Icnt++)
    {
        printf("%d",  iNo);
    }

}
int main()
{
    int iValue =0;
    int iCount =0;

    printf("enter number");
    scanf("%d",&iValue);

    printf("enter frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}