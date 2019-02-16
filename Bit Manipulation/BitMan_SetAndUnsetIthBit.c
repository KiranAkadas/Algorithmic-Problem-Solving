#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter i to be set\n");
    scanf("%d",&i);
    n=n|(1<<i);
    printf("After setting: %d\n",n);
    printf("Enter i to be unset\n");
    scanf("%d",&i);
    n=n&(~(1<<i));
    printf("After setting: %d\n",n);
    return 0;
}
