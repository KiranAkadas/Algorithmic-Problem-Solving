#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    //First Method
    int b=-n;
    //2nd Method
    int r=(~n)+1;
    printf("%d\n%d",b,r);
}
