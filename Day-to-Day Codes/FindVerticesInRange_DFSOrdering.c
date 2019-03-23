#include <stdio.h>
#include <stdlib.h>

//https://www.hackerrank.com/contests/aps-dfs-orderings/challenges/within-and-without

struct order
{
    int preorder;
    int postorder;
};

struct order o[1000];
int tick=1;
int v[1000];
int a[1000][1000];

void dfs(int n, int source)
{
    int i;

    v[source] = 1;
    o[source].preorder=tick++;
    for(i=0; i<n; i++)
    {
        if(a[source][i] == 1 && v[i] == 0)
        {
            dfs(n, i);
        }
    }
    o[source].postorder=tick++;
}

int main()
{
    int i,n,j,u,e,vv,ver;
    int src;
    scanf("%d %d",&n,&e);
    for(i=0;i<e;i++)
    {
        scanf("%d %d",&u,&vv);
        a[u-1][vv-1]=1;
        a[vv-1][u-1]=1;
    }
    scanf("%d",&src);
    src=src-1;
    scanf("%d",&ver);
    dfs(n,src);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(v[i]!=1)
            dfs(n,i);
    }

    for(i=0;i<n;i++)
    {
        if(o[ver-1].preorder<=o[i].preorder&&o[i].preorder<o[i].postorder&&o[i].postorder<=o[ver-1].postorder)
            printf("%d ",i+1);
    }
    return 0;
}
