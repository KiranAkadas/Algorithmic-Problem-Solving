#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter n\n");
    scanf("%d",&n);
    int a[n+1];
    memset(a,0,sizeof(a));
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            a[i]+=a[j]*a[i-1-j];
        }
    }
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
