#include<stdio.h>
#include<string.h>
int main ()
{
    char s[10000];
    int i,x,pal=1;
    scanf ("%s",s);
    x = strlen(s);
    for (i=0;i<x/2;i++)
    {
        if (s[i] != s[x-i-1])
        {
            pal=0;
            break;
        }
    }
    if (pal)
    {
        printf ("YES\n");
    }
    else
    {
        printf ("NO\n");
    }
    return 0;
}
