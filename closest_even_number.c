#include<stdio.h>
void main()
{
    int num,i;
    printf("enter the number");
    scanf("%d",&num);
    for(i=num-1;i<num+1;i++)
    {
       if(i%2==0)
       {
           printf("%d",i);
       }
    }
}
