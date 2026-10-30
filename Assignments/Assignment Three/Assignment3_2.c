// write a program which accept numberr from user and print even factors of that number.
// input: 24
//output 1,2,3,4,6,8,12

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i =0;
    

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(i=1; i<=(iNo/2);i++)
    {
        if((iNo%i)==0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue =0;
    printf("enter the number");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}