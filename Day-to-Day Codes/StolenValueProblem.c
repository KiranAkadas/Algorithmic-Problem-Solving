#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter the values\n");
    int a[n],value[n+1];
    value[0]=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        value[i+1]=a[i];
    }
    for(i=2;i<=n;i++)
    {
        value[i]=(value[i-1]>(value[i-2]+value[i]))?value[i-1]:(value[i-2]+value[i]);
    }
    printf("Maximum Profit: %d",value[n]);
    return 0;
}
