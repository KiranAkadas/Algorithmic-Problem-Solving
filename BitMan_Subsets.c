#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char b[n];
    int size=pow(2,n);
    printf("Enter array of Characters");

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%c",&b[i]);
    }
    int j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
                printf("%c ",b[j]);
        }
        printf("\n");
    }
}
