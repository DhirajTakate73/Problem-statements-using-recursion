#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;             // static storage class variable

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();                 // Recursive call
    }
}

int main()
{
    DisplayR();

    return 0;
}
