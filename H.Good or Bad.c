#include<stdio.h>
#include<string.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    char S[1000000];
    for (i=0;i<n;i++)
    {
        scanf ("%s",S);
        if (strstr(S,"010") || strstr(S,"101"))
        {
            printf ("Good\n");
        }
        else
        {
            printf ("Bad\n");
        }
    }
    return 0;
}
