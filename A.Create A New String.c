#include<stdio.h>
#include<string.h>
int main ()
{
    char S[1000000];
    char T[1000000];
    gets(S);
    gets(T);
    int length1 = strlen(S);
    int length2 = strlen(T);
    printf ("%d %d\n",length1,length2);
    printf ("%s %s\n",S,T);
    return 0;
}
