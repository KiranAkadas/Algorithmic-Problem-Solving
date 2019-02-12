#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j;
    printf("Enter value of n and k\n");
    scanf("%d %d",&n,&k);
    int a[n+1][k+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k&&j<=i;j++)
        {
            if(j==0 || i==j)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k&&j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
