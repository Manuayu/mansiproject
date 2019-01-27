#include <stdio.h>
void main()
{
    int n,arr[100],i;
    int max,min;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
        else
        {
            max=arr[i];
            min=arr[i];
        }
    }
    printf("%d %d",min,max);

}
