#include <stdio.h>
void printArmstrongNumbers(int start, int end) {
    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num;
        int digits = 0;
        // Calculate number of digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = num; // Reset temp to original number
        // Calculate sum of digits raised to the power of the number of digits
        while (temp != 0) {
            int digit = temp % 10;
            int power = 1;
            // Calculate digit^digits manually
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }
        // Check if the sum equals the original number
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n"); // Print a newline at the end
}
int main() {
    int start, end;
    // Get input from user
    printf("Enter the start and end values: ");
    scanf("%d %d", &start, &end);
    // Print Armstrong numbers in the specified range
    printArmstrongNumbers(start, end);
    return 0;
}
