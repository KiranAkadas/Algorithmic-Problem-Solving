#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a[n],i,j;
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j] && b[j]+1>b[i])
            {
                b[i]=b[j]+1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
