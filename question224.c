#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    char temp[100][100];  // Array to store words (assuming max 100 words of 100 characters)
    int i = 0;
    
    // Tokenize the string and store words in the temp array
    char *word = strtok(str, " ");
    while (word != NULL) {
        strcpy(temp[i], word);
        i++;
        word = strtok(NULL, " ");
    }

    // Print words in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%s", temp[j]);
        if (j != 0) {  // To avoid extra space at the end
            printf(" ");
        }
    }
}

int main() {
    char str[100];
    
    // Read input string
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character if any
    
    reverseWords(str);  // Reverse words in the string
    printf("\n");  // Print new line at the end
    return 0;
}
