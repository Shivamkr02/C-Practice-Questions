#include <stdio.h>
#include <string.h>

void makeAcronym(char *name) {
    char acronym[100] = "";  // String to store the acronym
    int i = 0, len = strlen(name);
    int wordStart = 0;
    int wordCount = 0;
    
    // Traverse the string
    for (int j = 0; j <= len; j++) {
        if (name[j] == ' ' || name[j] == '\0') {
            // If we find a space or end of string, it means the current word is over
            if (wordCount < 2) {
                // Take the first character of the first and middle names for acronym
                if (name[wordStart] >= 'a' && name[wordStart] <= 'z') {
                    acronym[i++] = name[wordStart] - 32;  // Convert to uppercase
                } else {
                    acronym[i++] = name[wordStart];  // Already uppercase or non-alphabetic
                }
            }
            // Move the start of the next word
            wordStart = j + 1;
            wordCount++;
        }
    }
    
    // Append the last word (last name) as it is
    while (name[wordStart] != '\0') {
        acronym[i++] = name[wordStart++];
    }
    
    acronym[i] = '\0';  // Null-terminate the acronym string
    
    printf("Acronym: %s\n", acronym);  // Print the resulting acronym
}

int main() {
    char name[100];
    
    // Read the input string
    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';
    
    // Generate the acronym
    makeAcronym(name);
    
    return 0;
}
