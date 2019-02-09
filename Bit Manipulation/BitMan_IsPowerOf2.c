#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result=0,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    result=n&(n-1);
    if(result==0)
      printf("Number is a power of 2");
     else
      printf("Number is not power of 2");
    return 0;
}
