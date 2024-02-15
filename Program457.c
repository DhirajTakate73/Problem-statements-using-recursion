#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
        DisplayR(iNo);      // Tail recursion
        
    }
}

int main()
{
    DisplayR(5);

    return 0;
}
