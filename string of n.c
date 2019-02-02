#include <stdio.h>
#include <math.h>
void main()
{
    char s[100];
    int n,j,m,i;
    scanf("%s %d",&s,&n);
    m=strlen(s);
    j=m-n;
    for(i=j;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
    }
}
