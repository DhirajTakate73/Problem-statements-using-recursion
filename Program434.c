#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;                       // Loop counter (variable with auto storage class)

    while(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;                    // static storage class variable

    if(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        DisplayR();                      // Recursive function call
    }
}

int main()
{
    DisplayR();

    return 0;
}

// Because of auto storage class we cannot preserve memory of particular variable across the function calls 
// if we have to preserve memory of particular variable across the function calls we must have to make that variable static (storage class)
// if we don't make variable static still we're using it in recursive function calls then we get abnormal output and code will stop deu to segmentation fault at particular point.