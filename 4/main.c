// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

// Answer: 906609

#include <stdio.h>
#include <math.h>

// returns the length of the number
int numberLength(int n) {
	int length = 1;

	while(n > 9) {
		length++;
		n /= 10;
	}

	return length;
}

// returns 0 if false, 1 if true
int isPalindrome(int n) {
	int length = numberLength(n);
	for(int i=0; i<length/2; i++) {
		//int firstDigit = (int) (n/pow(10, length-i-1))%10;
		//int lastDigit = (int) (n/pow(10, i))%10;
		if((int) (n/pow(10, length-i-1))%10 != (int) (n/pow(10, i))%10) {
			return 0;
		}
	}
	
	return 1;
}

int main() {
	int num1;
	int num2;
	int product;

	int currentMax = 0;
	for(num1 = 999; num1 > 99; num1--) {
		for(num2 = num1; num2 > 99; num2--) {
			product = num1*num2;
			if(num1 == num2 && product < currentMax) {num1 = 0; break;}
			if(isPalindrome(product) && product > currentMax) {
				currentMax = product;
			}
		}
	}


	printf("Largest palindrome that is a product of 3-digit numbers is %d\n", currentMax);

	return 0;
}
