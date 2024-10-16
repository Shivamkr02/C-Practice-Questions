#include <stdio.h>
#include <math.h>

int is_prime(int);
void print_prime(int);

int main() {
    print_prime(10); // Example: Prints the first 10 prime numbers
    return 0;
}

void print_prime(int n) {
    int x = 2;
    while (n) {
        if (is_prime(x)) {
            printf("%d ", x);
            n--;
        }
        x++;
    }
    printf("\n");
}

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
