#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int gcd{ 1 };

	if (a == b) {
		gcd = a;
	}

	int first_num = a;
	int second_num = b;

	for (int i = 2; i <= first_num && i <= second_num; i++) {
		if (first_num % i == 0 && second_num % i == 0) {
			gcd = i;
		}
	}
	return gcd;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n <= 1) {
		return n;
	}
	int fib = n;
	return fibonacci(fib - 1) + fibonacci(fib - 2);
}
