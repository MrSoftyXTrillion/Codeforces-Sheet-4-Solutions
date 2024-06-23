#include <stdio.h>
#include <string.h>
int main() {
    char s[1001];
    gets(s);
    int len = strlen(s);
    int i = 0, j = 0;
    while (i < len)
    {
        if (i <= len - 5 && s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T')
        {
            s[j++] = ' ';
            i += 5;
        }
        else
        {
            s[j++] = s[i++];
        }
    }
 
    s[j] = '\0';
    printf("%s", s);
 
    return 0;
}
