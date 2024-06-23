#include<stdio.h>
#include<string.h>
int main ()
{
    char S[1000000];
    gets(S);
    int s = strlen(S);
    for (int i=0;i<s;i++)
    {
        if (S[i]==',')
        {
            S[i]=' ';
        }
        else if (S[i]>='a' && S[i]<='z')
        {
            S[i]=S[i]-32;
        }
        else if (S[i]>='A' && S[i]<='Z')
        {
            S[i]=S[i]+32;
        }
    }
    puts(S);
    return 0;
}
