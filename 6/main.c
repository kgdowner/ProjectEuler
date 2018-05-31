// The sum of the squares of the first ten natural numbers is,
// 12 + 22 + ... + 102 = 385
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)2 = 552 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

// Answer: 25164150

#include <stdio.h>

#define MAX_NATURAL_NUMBER 100

int main() {
	long sum_squares = 0;
	long square_sum  = 0;

	for(int i=1; i<=MAX_NATURAL_NUMBER; i++) {
		sum_squares += (i*i);
		square_sum  += i;
	}
	square_sum *= square_sum;

	long difference = square_sum - sum_squares;
	printf("The difference between the sum of the squares of the first %d natural numbers and the square of the sum is %d\n", MAX_NATURAL_NUMBER, difference);

	return 0;
}
