// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

//Answer: 4613732

#include <stdio.h>

#define MAX_FIBONACCI 4000000  // 4 million

int main() {
	int previous = 1;
	int current  = 2;
	int temp;

	long sum = 0;
	while(current < MAX_FIBONACCI) {
		if(current%2 == 0) {sum += current;}

		temp = current;
		current += previous;
		previous = temp;
	}


	printf("The sum of the even fibonacci numbers below four million is %ld\n", sum);

	return 0;
}