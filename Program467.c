#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);             // Special scanf
    
    return 0;
}
