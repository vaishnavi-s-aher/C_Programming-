// write a program which accept number from user and print even factors of that number
// input 36
// 2,6,12,18

void DisplayEvenFactor(int iNo)
{
    int i =0;
    if(iNo<=0)
    {
        iNo = -iNo;
    
    }
    for(i = 1; i<=iNo/2;i++)
    {
        if(iNo%2==0 && iNo%2=!0)
        {
            printf("%d\t",iNo);
        }

    }
}

int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}