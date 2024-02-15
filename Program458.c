#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        iNo--;
        DisplayR(iNo);                  // Head recursion
        printf("%d\n",iNo);
    }
}

int main()
{
    DisplayR(5);

    return 0;
}
