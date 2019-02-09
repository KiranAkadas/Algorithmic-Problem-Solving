#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int m,n,i,j;
    char a[100],b[100];
    //Read the Strings
    scanf("%s",a);
    scanf("%s",b);
    m=strlen(a);
    n=strlen(b);

    int t[m+1][n+1];

    //Initialize first row and column to 0
    for(i=0;i<m+1;i++)
    {
        t[i][0]=0;
    }
    for(i=0;i<n+1;i++)
    {
        t[0][i]=0;
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                t[i+1][j+1]=t[i][j]+1;
            }
            else
            {
                if(t[i][j+1]>t[i+1][j])
                    t[i+1][j+1]=t[i][j+1];
                else
                    t[i+1][j+1]=t[i+1][j];
            }
        }
    }
    for(i=0;i<m+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}
