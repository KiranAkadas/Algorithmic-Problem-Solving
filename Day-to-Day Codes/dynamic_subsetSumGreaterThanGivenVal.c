#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int subsetSumGreaterThanGivenValue(int set[],int setsize,int value)
{
    int x,k;
    int count=0;
    int sum;
    for(x=0;x<pow(2,setsize);x++)
    {
        sum=0;
        for(k=0;k<setsize;k++)
        {
            //Check if kth bit is set in x or not
            if(x&(1<<k)!=0)
            {
                //Add kth element from the array to the sum
               sum+=set[k];
            }
        }
        if(sum>=value)
            count++;
    }
    return count;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=subsetSumGreaterThanGivenValue(arr,5,4);
    printf("Subset Sum greater than 4=%d\n",n);
    return 0;
}
