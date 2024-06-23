#include <stdio.h>
#include <string.h>
 
int main() {
    char S[10005];
    scanf("%s", S);
 
    // Find the start of the query parameters
    char *params_start = strchr(S, '?');
    if (params_start != NULL) {
        params_start++; // Move past the '?'
        
        // Loop through the parameters separated by '&'
        while (params_start != NULL) {
            char *param_end = strchr(params_start, '&');
            if (param_end != NULL) {
                *param_end = '\0'; // Temporarily terminate the string at the '&'
            }
 
            // Split the key and value
            char *value = strchr(params_start, '=');
            if (value != NULL) {
                *value = '\0'; // Temporarily terminate the string at the '='
                value++; // Move to the start of the value
                printf("%s: %s\n", params_start, value);
            }
 
            // Move to the next parameter
            if (param_end != NULL) {
                params_start = param_end + 1;
            } else {
                params_start = NULL;
            }
        }
    }
    
    return 0;
}
