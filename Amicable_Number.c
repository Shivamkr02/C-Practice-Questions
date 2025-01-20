#include <stdio.h>

int main() {
    int num1, num2, i, sum1 = 0, sum2 = 0;

    // Read two numbers
    scanf("%d%d", &num1, &num2);

    // Calculate sum of proper divisors of num1
    for (i = 1; i < num1; i++) {
        if (num1 % i == 0) {
            sum1 += i;
        }
    }
    // Calculate sum of proper divisors of num2
    for (i = 1; i < num2; i++) {
        if (num2 % i == 0) {
            sum2 += i;
        }
    }

    // Check if the numbers are amicable
    if (sum1 == num2 && sum2 == num1)
        printf("Amicable Number");
    else
        printf("Not Amicable Number");

    return 0;
}
