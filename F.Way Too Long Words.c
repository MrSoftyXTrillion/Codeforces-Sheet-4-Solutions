#include<stdio.h>
#include<string.h>
int main ()
{
    char S[1000];
    int i,n;
    scanf ("%d",&n);
    while(n--)
    {
        scanf ("%s",S);
        int x = strlen(S);
        if (x>10)
        {
            printf ("%c",S[0]);
            printf ("%d",x-2);
            printf ("%c",S[x-1]);
            printf ("\n");
        }
        else
        {
            puts(S);
        }
    }
    return 0;
}
