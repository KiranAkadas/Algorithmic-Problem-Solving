#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,i,j;
    printf("Enter n\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter required sum\n");
    scanf("%d",&sum);

    int ss[n+1][sum+1];
    for(i=0;i<=sum;i++)
        ss[0][i]=0;  //No sum is possible with 0 elements in the array
    for(i=0;i<=n;i++)
    {
        ss[i][0]=1; //Sum=0 is possible for all arrays as it will be an empty set
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(ss[i-1][j]==1)
                ss[i][j]=1;
            else
            {
                if(arr[i-1]>j)
                    ss[i][j]=0;
                else
                    ss[i][j]=ss[i-1][j-arr[i-1]];
            }
        }
    }

    for(i=0;i<=n;i++){
        for(j=0;j<=sum;j++)
            printf("%d ",ss[i][j]);
        printf("\n");
    }
    if(ss[n][sum]==1)
        printf("Sum can be obtained");
    return 0;
}
