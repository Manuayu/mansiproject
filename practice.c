#include <stdio.h>
void main()
{
    char s[100];
    int i,n;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i==0)
        {
            if(s[i]>='a' && s[i]<='z')
            {
            s[i]=s[i]-32;
            continue;
            }
        }
        else if(s[i]==' ')
        { 
             ++i;
             if(s[i]>='a' && s[i]<='z')
             {
             s[i]=s[i]-32;
             continue;
             }
        }
        
    }
    printf("%s",s);
}
