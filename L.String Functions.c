#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_SIZE 100 // Maximum size of the string
 
int main() {
    int N, Q;
    char S[MAX_SIZE]; // Input string
    scanf("%d %d", &N, &Q);
    getchar(); // Consume newline character
 
    // Read the string
    fgets(S, MAX_SIZE, stdin);
    S[strcspn(S, "\n")] = '\0'; // Remove trailing newline
 
    // Process each query
    for (int i = 0; i < Q; i++) {
        char query[20]; // Buffer for the query
        fgets(query, 20, stdin);
        query[strcspn(query, "\n")] = '\0'; // Remove trailing newline
 
        if (strcmp(query, "pop_back") == 0) {
            S[strlen(S)-1] = '\0';
        } else if (strcmp(query, "front") == 0) {
            printf("%c\n", S[0]);
        } else if (strcmp(query, "back") == 0) {
            printf("%c\n", S[strlen(S)-1]);
        } else if (strncmp(query, "push_back ", 9) == 0) {
            char x = query[9];
            S[strlen(S)] = x;
            S[strlen(S)+1] = '\0'; // Null-terminate the string
        }
    }
 
    return 0;
}
