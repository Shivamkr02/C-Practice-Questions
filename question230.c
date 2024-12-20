#include <stdio.h>

void concatenateStrings(char *str1, const char *str2) {
    // Move the pointer to the end of the first string
    while (*str1 != '\0') {
        str1++;
    }

    // Append the second string to the first string
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Null terminate the concatenated string
    *str1 = '\0';
}

int main() {
    char str1[200], str2[100];

    // Read two input strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character if any

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character if any

    // Concatenate the strings using custom function
    concatenateStrings(str1, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
