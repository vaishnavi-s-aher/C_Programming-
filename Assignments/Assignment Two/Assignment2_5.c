// check number is even or odd
#include<stdio.h>
#define true 1
#define false 0

typedef int BOOL;
BOOL ChkEven(int iNo1)
{
    iNo1%2==0;
}

int main()
{
    int ivalue=0;
    BOOL bRet = false;
    printf("enter the number");
    scanf("%d",&ivalue);
    bRet = ChkEven(ivalue);

    if (bRet==true)
    {
            printf("%d number is even",ivalue);
    }
    else
    {
        printf("%d number is odd",ivalue);
    }
    return 0;
}