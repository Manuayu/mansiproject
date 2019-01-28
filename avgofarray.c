#include <stdio.h>
int main()
{
    int n,arr[100],sum=0,avg,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    printf("%d",avg);
    return 0;
}
