#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int result = n & 1;
    if(result)
        printf("Odd number\n");
    else
        printf("Even number\n");

    return 0;
}
