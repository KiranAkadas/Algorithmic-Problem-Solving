#include <stdio.h>
#include <stdlib.h>

//https://www.hackerrank.com/contests/aps-dfs-orderings/challenges/dfs-2-ordering-correctness

struct order
{
    int preorder;
    int postorder;
};

struct order o[1000];
int tick=1;
int v[1000];
int a[1000][1000];


int main()
{
    int i,n,j,k,u,e,vv,t,ver;
    int flag=0;
    int src;
    scanf("%d",&t);
    for(j=0;j<t;j++){
    scanf("%d",&n);
        flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&v[i],&o[i].preorder,&o[i].postorder);
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            if(i!=k){
            if(o[i].preorder<=o[k].preorder&& o[k].preorder<=o[i].postorder && o[i].postorder<=o[k].postorder)
                flag=1;
            else if(o[k].preorder<=o[i].preorder&& o[i].preorder<=o[k].postorder && o[k].postorder<=o[i].postorder)
                flag=1;
            }
        }
    }
        if(flag==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
