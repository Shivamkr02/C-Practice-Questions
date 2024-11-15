#include <stdio.h>
// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
// Function to calculate the sum of the series
double sumOfSeries(int N) {
    double sum = 0.0;
    for (int i = 1; i <= N; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}
int main() {
    int N;
    // Get input from user
    printf("Enter the value of N: ");
    scanf("%d", &N);
    // Calculate and print the sum of the series
    double result = sumOfSeries(N);
    printf("The sum of the series is: %.2f\n", result);  
    return 0;
}
