#include <stdio.h>
#include <string.h>

int findWord(char *str, char *word) {
    int strLen = strlen(str);
    int wordLen = strlen(word);

    // Loop through the main string
    for (int i = 0; i <= strLen - wordLen; i++) {
        // Check if the word matches at position i in the string
        int j = 0;
        while (j < wordLen && str[i + j] == word[j]) {
            j++;
        }
        
        // If the whole word matches, return the index
        if (j == wordLen) {
            return i;  // Return the starting index of the word
        }
    }

    return -1;  // Word not found
}

int main() {
    char str[100], word[50];
    
    // Read the main string
    printf("Enter the main string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character if any

    // Read the word to search for
    printf("Enter the word to search: ");
    fgets(word, 50, stdin);
    word[strcspn(word, "\n")] = '\0';  // Remove newline character if any

    // Find the word in the string
    int result = findWord(str, word);
    
    if (result != -1) {
        printf("The word '%s' found at index %d.\n", word, result);
    } else {
        printf("The word '%s' was not found in the string.\n", word);
    }

    return 0;
}
