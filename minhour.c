#include <stdio.h>
int main()
{
    int hr1,min1;
    int hr2,min2,h,m;
    scanf("%d %d",&hr1,&min1);
    scanf("%d %d",&hr2,&min2);
    h=abs(hr1-hr2);
    m=abs(min1-min2);
    printf("%d %d",h,m);
    
}
