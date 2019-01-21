#include <stdio.h>
void main()
{
    int n,a,d,lt,sum;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of d");
    scanf("%d",&d);
    printf("nth term will get print");
    lt=a+((n-1)*d);
    printf("the sum of the ap");
    sum=(n*(a+lt))/2;
    printf("the sum is %d",sum);
    
    
}
