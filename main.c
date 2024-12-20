// File: main.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PRIME 1000

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to generate an array of prime numbers under MAX_PRIME
int generate_primes(int primes[], int max_size) {
    int count = 0;
    for (int i = 2; i < MAX_PRIME && count < max_size; i++) {
        if (is_prime(i)) {
            primes[count++] = i;
        }
    }
    return count;
}

int main() {
    srand(time(NULL)); // Seed for randomness

    int primes[MAX_PRIME];
    int num_primes = generate_primes(primes, MAX_PRIME);

    int random_count = rand() % num_primes; // Random number of primes to print

    printf("Printing %d random prime numbers:\n", random_count);

    for (int i = 0; i < random_count; i++) {
        printf("%d\n", primes[i]);
    }

    return 0;
}
