#include<stdio.h>
void main()
{
    int num,r,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum+=r;
        num/=10;
    }
    printf("%d",sum);
}
