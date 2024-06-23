#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], t[100], temp[200];
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s %s", s, t);
        int len_s = strlen(s), len_t = strlen(t);
        int min_len = len_s < len_t ? len_s : len_t;
        int i, j;
        for (i = 0, j = 0; i < min_len; i++)
        {
            temp[j++] = s[i];
            temp[j++] = t[i];
        }
 
        if (len_s > len_t)
        {
            strcpy(temp + j, s + min_len);
        } else
        {
            strcpy(temp + j, t + min_len);
        }
        printf("%s\n", temp);
    }
 
    return 0;
}
