#include <stdio.h>
#include <math.h>

int abs (int x) {return x >= 0 ? x : (-1) * x;}

int main(){

	float q;

	int c = 1;
	int x = 2;

	// 1*1 - 0 >= 0
	// 0.9 * 2.72 * 2.72 = 

	q = ((c*c-x) >= 0) ? (1.7*exp(x)) : (6.9*exp(x));	
	printf("q = %.2f\n", q);

	int a = -25;
	a + abs(a); // |-25| = 25

	printf("a = %i\n", a);

	return 0;
}