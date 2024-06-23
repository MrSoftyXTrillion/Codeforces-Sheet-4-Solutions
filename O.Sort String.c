#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int arr[26] = {0};
 
    for (int i = 0; i < n; i++) {
        char c;
        scanf(" %c", &c);  // Note the space before %c to consume any leftover newline characters
        arr[(int)c - 97]++;  // Similar to count array for alphabets
    }
 
    for (int i = 0; i < 26; i++) {
        while (arr[i] != 0) {
            printf("%c", (char)(i + 97));
            arr[i]--;
        }
    }
 
    printf("\n");  // Add a newline at the end of the output for better formatting
 
    return 0;
}
