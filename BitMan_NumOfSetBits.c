#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result=0,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n){
        result=result+1;
        n=n&(n-1);
    }
    printf("Number of Set Bits:%d\n",result);
    return 0;
}
