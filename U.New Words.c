#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char S[1000001];
    int count_e = 0, count_g = 0, count_y = 0, count_p = 0, count_t = 0;
 
    // Read the input string
    scanf("%s", S);
 
    // Convert the string to lowercase and count occurrences of 'e', 'g', 'y', 'p', 't'
    for (int i = 0; S[i] != '\0'; i++) {
        char ch = tolower(S[i]);
        if (ch == 'e') count_e++;
        else if (ch == 'g') count_g++;
        else if (ch == 'y') count_y++;
        else if (ch == 'p') count_p++;
        else if (ch == 't') count_t++;
    }
 
    // The number of times we can form "EGYPT" is the minimum of these counts
    int min_count = count_e;
    if (count_g < min_count) min_count = count_g;
    if (count_y < min_count) min_count = count_y;
    if (count_p < min_count) min_count = count_p;
    if (count_t < min_count) min_count = count_t;
 
    // Print the result
    printf("%d\n", min_count);
 
    return 0;
}
