#include <stdio.h>
#include <stdlib.h>

int nonrepeating(int arr[],int n)
{
    int i,res=0;
    for(i=0;i<n;i++)
    {
        res=(res^arr[i]);
    }
    return res;
}

int main()
{
    int i,n,a[10];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int f=nonrepeating(a,n);
    printf("%d is non repeating element\n",f);
    return 0;
}
