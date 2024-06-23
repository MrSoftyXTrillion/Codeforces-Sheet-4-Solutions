#include <stdio.h>
#include <string.h>
 
int main() {
    char S[10000001];
    scanf("%s", S);
    int count[26] = {0};
    for (int i = 0; S[i] != '\0'; i++)
    {
        count[S[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }
 
    return 0;
}
