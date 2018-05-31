// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// Answer: 232792560

#include <stdio.h>

#define MAX_DIVISOR 20

// checks if divisible by #'s 1 to MAX_DIVISOR-1
// returns 1 on true, 0 on false
int isDivisible(long n) {
	for(int i=2; i<MAX_DIVISOR; i++) {
		if(n%i != 0) {return 0;}
	}
	return 1;
}

int main() {
	int targetNumber = 0;

	for(long i=MAX_DIVISOR; targetNumber==0; i+=MAX_DIVISOR) {
		if(isDivisible(i)) {targetNumber = i;}
	}

	printf("The smallest positive number that is evenly disible by numbers 1 through %d is %d\n", MAX_DIVISOR, targetNumber);

	return 0;
}
