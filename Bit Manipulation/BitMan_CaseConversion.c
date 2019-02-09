#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    printf("Enter a lower case letter");
    fflush(stdin);
    scanf("%c",&a);
    printf("Enter a upper case letter");
    fflush(stdin);
    scanf("%c",&b);
    a=a&(~32);
    b=b|32;
    printf("%c\n%c",a,b);
    return 0;
}
