#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,k,i,j;
    scanf("%d",&n);
    scanf("%d",&k);
    int v[n+1],a[k];
    memset(v,0,(n+1)*sizeof(v[0]));
    v[0]=1;
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=a[i];j<n+1;j++)
        {
            if(v[j-a[i]]>0)
            {
                v[j]+=v[j-a[i]];
            }
        }
    }
    for(i=0;i<n+1;i++)
    {
        printf("%d ",v[i]);
    }
}
