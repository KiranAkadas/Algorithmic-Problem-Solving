#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter i\n");
    scanf("%d",&i);
    if((n&(1<<i))!=0)
        printf("Yes");
}
