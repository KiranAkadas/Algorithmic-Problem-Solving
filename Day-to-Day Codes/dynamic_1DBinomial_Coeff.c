#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    long int n,k,i,j;
    printf("Enter value of n and k\n");
    scanf("%d %d",&n,&k);
    long int a[k+1];
    memset(a,0,sizeof(a));
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=min(i,k);j>0;j--)
        {
            a[j]=a[j]+a[j-1];
        }
    }
    for(i=0;i<=k;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
