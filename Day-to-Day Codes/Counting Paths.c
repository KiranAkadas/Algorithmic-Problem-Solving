#include <stdio.h>
#include <stdlib.h>
void multiply(int a[10][10],int b[10][10],int res[10][10],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res[i][j]=0;
            for(k=0;k<n;k++)
            {
                res[i][j]+=a[i][k]*b[j][k];
            }
        }
    }
}

int main()
{
    int n,i,j,k,a[10][10],b[10][10],res[10][10],pth;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
            res[i][j]=a[i][j];
        }
    }
    printf("Enter the length of path\n");
    scanf("%d",&pth);
    for(i=2;i<=pth;i++)
    {
        multiply(a,b,res,n);
        for(k=0;k<n;k++)
        {
            for(j=0;j<n;j++)
            {
                b[k][j]=res[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
