#include <stdio.h>
#include <string.h>
int main()
{
    char S[1000001];
    gets(S);
    int len = strlen(S);
    if (S[len - 1] == '\n')
    {
        S[len - 1] = '\0';
        len--;
    }
    int start = 0;
    for (int i = 0; i <= len; i++)
    {
        if (S[i] == ' ' || S[i] == '\0')
        {
            for (int l = start, r = i - 1; l < r; l++, r--)
            {
                char temp = S[l];
                S[l] = S[r];
                S[r] = temp;
            }
            start = i + 1;
        }
    }
 
    printf("%s\n", S);
    return 0;
}
