// write a program which accept one number from user and print the unmber of even numbers on screen 
// :7
// 2,4,8,10,12,14

# include<stdio.h>
void PrintEven(int iNo)
{    
    int icnt=0;
    if(iNo<=0)
    {
        return;
    }

    for(icnt=1;icnt<=iNo ; icnt++)
    {
        printf("%dt",icnt*2);
    }
}

int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
