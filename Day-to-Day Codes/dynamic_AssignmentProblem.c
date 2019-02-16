#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<limits.h>

int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}

int count_set_bits(int m)
{
    int res=0;
    while(m){
        res+=1;
        m=m&(m-1);
    }
    return res;
}

int assignmentProblem(int a[3][3],int N)
{
    int set_size=pow(2,N);
    int i,j,mask,x;
    int dp[set_size];
    for(i=0;i<set_size;i++)
        dp[i]=INT_MAX;
    dp[0]=0;
    for(mask=0;mask<set_size;mask++)
    {
        x=count_set_bits(mask);
        for(j=0;j<N;j++)
        {
            if((mask&(1<<j))==0)
            {
                dp[mask|(1<<j)]=min(dp[(mask|(1<<j))],(dp[mask]+a[x][j]));
            }
        }
    }
    printf("DP Array:\n");
    for(i=0;i<set_size;i++)
        printf("%d ",dp[i]);
    printf("\n");
    return dp[set_size-1];
}

int main()
{
    int N,i,j;
    printf("Enter the number of jobs\n");
    scanf("%d",&N);
    int a[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    }
    int res=assignmentProblem(a,N);
    printf("Minimum Cost=%d",res);
    return 0;
}
