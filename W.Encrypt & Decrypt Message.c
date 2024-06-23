#include <stdio.h>
#include <string.h>
 
int main() {
    int Q;
    scanf("%d", &Q);
    
    char S[100001];
    scanf("%s", S);
    
    char *Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
 
    char encrypt_map[128];  // Mapping for encryption
    char decrypt_map[128];  // Mapping for decryption
 
    // Initialize mapping arrays
    memset(encrypt_map, 0, sizeof(encrypt_map));
    memset(decrypt_map, 0, sizeof(decrypt_map));
 
    // Build encryption and decryption maps
    for (int i = 0; i < 62; i++) { // Original and Key have 62 characters (26 lower + 26 upper + 10 digits)
        encrypt_map[(int)Original[i]] = Key[i];
        decrypt_map[(int)Key[i]] = Original[i];
    }
 
    // Process the string S based on Q
    if (Q == 1) {
        // Encryption
        for (int i = 0; S[i] != '\0'; i++) {
            S[i] = encrypt_map[(int)S[i]];
        }
    } else if (Q == 2) {
        // Decryption
        for (int i = 0; S[i] != '\0'; i++) {
            S[i] = decrypt_map[(int)S[i]];
        }
    }
 
    // Print the result
    printf("%s\n", S);
 
    return 0;
}
