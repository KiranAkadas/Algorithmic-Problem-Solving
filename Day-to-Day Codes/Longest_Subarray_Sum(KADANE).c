#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sum,n;
    long int i,max=0,tmax=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        tmax+=a[i];
        if(tmax<0)
            tmax=0;
        else if((tmax)>max)
            max=tmax;
    }
    printf("Longest Subarray Sum: %d\n",max);
    return 0;
}
