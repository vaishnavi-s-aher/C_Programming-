//Accept one number and check wheter is divisible by 5 or not

#include<stdio.h>
#include<stdlib.h>


typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL check (int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Eter number");
    scanf("%d:",&iValue);

     bRet = check(iValue);

     if(bRet==TRUE)
     {
        printf("Divisible by 5");
     }
     else
     {
        printf("NOt divisible by 5");
     }

     return EXIT_SUCCESS;
}
