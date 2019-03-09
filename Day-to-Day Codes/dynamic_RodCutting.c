#include <stdio.h>
#include <stdlib.h>

int max(int n1,int n2,int n3)
{
    if( n1>=n2 && n1>=n3 )
        return(n1);

    if( n2>=n1 && n2>=n3 )
        return(n2);

    if( n3>=n1 && n3>=n2 )
        return(n3);
}

int main()
{
    int n,i,j;
    printf("Enter length of rod\n");
    scanf("%d",&n);
    int RC[n+1];
    memset(RC,0,sizeof(RC));
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=(i/2);j++)
        {
            RC[i]=max(RC[i],(j*(i-j)),(j*RC[i-j]));
        }
    }
    printf("Largest product=%d",RC[n]);
    return 0;
}
