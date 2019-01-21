#include <stdio.h>
void main()
{
    int n,i,arr[10],j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
            m=arr[i];
            arr[i]=arr[j];
            arr[j]=m;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

}
