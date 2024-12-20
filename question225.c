#include<stdio.h>
#include<string.h>

// Function to compare two strings case-insensitively
int compare_case_ignore(char s1[], char s2[]) {
    int i;

    // Compare both strings character by character
    for(i = 0; s1[i] && s2[i]; i++) {
        char c1 = s1[i];
        char c2 = s2[i];

        // Convert to uppercase (both characters)
        if(c1 >= 'a' && c1 <= 'z') {
            c1 -= 32;
        }
        if(c2 >= 'a' && c2 <= 'z') {
            c2 -= 32;
        }

        // Compare characters
        if(c1 != c2) {
            return 0; // Strings are not equal
        }
    }

    // Check if both strings have ended at the same time
    return (s1[i] == '\0' && s2[i] == '\0');
}

int main() {
    char str[20];
    fgets(str, 20, stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Compare the input string with the string "bhopal"
    int res = compare_case_ignore(str, "bhopal");
    
    // Output the result
    printf("%d\n", res);

    return 0;
}
