#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000001];
    fgets(s, sizeof(s), stdin);  // Use fgets to read the input safely

    int i, len = strlen(s), count = 0;
    int inWord = 0;

    for (i = 0; i < len; i++) {
        if (isalpha(s[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("%d\n", count);
    return 0;
}
