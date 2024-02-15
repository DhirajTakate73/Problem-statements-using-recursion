#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        iCnt++;
        DisplayR();
        printf("%d\n",iCnt);        // Head recursion
    }
}

int main()
{
    DisplayR();

    return 0;
}
