#include <stdio.h>

#define TARGET_NUMBER 1000

int main() {
	// find the highest multiplier for each multiple
	int max3   = (TARGET_NUMBER-1)/3;
	int max5   = (TARGET_NUMBER-1)/5;
	int max15  = (TARGET_NUMBER-1)/15;

	// the sum using inclusion-exclusion
	int sum = ((3 * max3 * (max3+1)) + (5 * max5 * (max5+1)) - (15 * max15 * (max15+1))) / 2;


	printf("The sum of all multiples of 3 or 5 below 1000 is %d\n", sum);	

	return 0;
}
