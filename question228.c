#include <stdio.h>
#include <ctype.h>  // For isalpha() and toupper()

void capitalizeFirstLetterOfWords(char *str) {
    // Check if the string is not empty
    if (str == NULL || str[0] == '\0') {
        return;
    }
    
    // Traverse the string
    int i = 0;
    // Capitalize the first character of the string if it's alphabetic
    if (isalpha(str[i])) {
        str[i] = toupper(str[i]);
    }
    
    // Loop through each character in the string starting from index 1
    for (i = 1; str[i] != '\0'; i++) {
        // Check if the current character is a space (word boundary)
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Capitalize first letter of the word
        }
    }
}

int main() {
    char str[100];
    
    // Read the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';
    
    // Capitalize first letter of each word
    capitalizeFirstLetterOfWords(str);
    
    // Output the modified string
    printf("Modified string: %s\n", str);
    
    return 0;
}
