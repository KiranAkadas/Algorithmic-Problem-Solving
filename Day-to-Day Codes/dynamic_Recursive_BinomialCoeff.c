#include <stdio.h>
#include <stdlib.h>
long long int bin_coeff(int n,int k)
{
    if(k==0 || k==n)
        return 1;
    else
        return(bin_coeff(n-1,k-1)+bin_coeff(n-1,k));
}
int main()
{
    int n,k,i,j;
    printf("Enter value of n and k\n");
    scanf("%d %d",&n,&k);
    long long int res;
    res=bin_coeff(n,k);
    printf("C(%d,%d)=%lld\n",n,k,res);
    return 0;
}
