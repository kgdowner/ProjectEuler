// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

// Answer: 6857

#include <stdio.h>
#include <math.h>

#define TARGET_NUM 600851475143

// returns: 1 if true, 0 if false
int isPrime(double n) {
	double nothing;  // >.<
	if(modf(n, &nothing) != 0) {return 0;}  // must be a real number
	double sqrtN = sqrt(n);
	for(long i=2; i<sqrtN; i++) {
		if(fmod(n, i) == 0) {return 0;}  // can't have factors
	}

	return 1;  // otherwise prime
}

int main() {
	double sqrtTarget = sqrt(TARGET_NUM);
	double primeFactor = 0;
	
	double currentFactor;
	for(long i=2; i<=sqrtTarget; i++) {
		// the upper factor
		currentFactor = (double) TARGET_NUM/i;
		if(isPrime(currentFactor)) {
			primeFactor = currentFactor;
			break;
		}

		// the lower factor
		if(fmod(TARGET_NUM, i) == 0 && isPrime(i)) {
			primeFactor = i;
		}
	}

	if(primeFactor != 0) {
		printf("The largest prime factor of the number %ld is %ld\n", TARGET_NUM, (long) primeFactor);
	} else {
		printf("Could not find a prime factor for %ld\n", TARGET_NUM);
	}

	return 0;
}
