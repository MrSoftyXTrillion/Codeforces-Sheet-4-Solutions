#include<stdio.h>
#include<string.h>
int main ()
{
    char S[10001];
    scanf ("%s",S);
    char hello[] = "hello";
    int i,j=0;
    for (i=0;S[i]!='\0';i++)
    {
        if (S[i]==hello[j])
        {
            j++;
            if (j==5)
            {
                printf ("YES\n");
                return 0;
            }
        }
    }
    printf ("NO\n");
    return 0;
}
