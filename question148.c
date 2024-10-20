#include <stdio.h>
void printPascalTriangle(int n) {
    for (int line = 0; line < n; line++) {
        // Print leading spaces
        for (int space = 0; space < n - line - 1; space++) {
            printf(" ");
        }
        int C = 1; // Coefficient
        for (int j = 0; j <= line; j++) {
            printf("%d ", C);
            C = C * (line - j) / (j + 1); // Calculate the next coefficient
        }
        printf("\n");
    }
}
int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    printPascalTriangle(rows);
    return 0;
}
