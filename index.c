#include <stdio.h>
void main()
{
    int n,a[500],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",a[i],i);
    }
    
    
    
}
