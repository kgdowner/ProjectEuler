// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?

// Answer: 104743

#include <stdio.h>
#include <math.h>

#define TARGET_PRIME 10001

// returns 1 if prime or 0 if not prime
int isPrime(long n) {
	long sqrtN = (long) sqrt(n);
	for(int i=2; i<=sqrtN; i++) {
		if(n%i == 0) {return 0;}
	}
	return 1;
}

int main() {
	int primeCount = 0;
	long currentPrime = 1;

	while(primeCount < TARGET_PRIME) {
		currentPrime++;
		if(isPrime(currentPrime)) {
			primeCount++;
			//printf("%07d  %d\n", primeCount, currentPrime);
		}
	}

	printf("The %dth prime is %d\n", TARGET_PRIME, currentPrime);

	return 0;
}
