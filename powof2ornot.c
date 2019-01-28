#include <stdio.h>
void main()
{
    int n,temp;
    int flag=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            flag=1;
            break;
        }
        temp/=2;
    }
    if(flag==1)
    printf("no");
    else
    printf("yes");
}
