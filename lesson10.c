#include <stdio.h>
#include <math.h>

float f(float x){

	if (x > 1) return ((x*x) - sin(3.14*x*x));
	if (x > 0 && x <= 1) return((x * x) - x);
	if (x <= 0)	return 0;


}

int main(){

	
	float result = f(0);  // result = 0
		  result = f(0.5); // 0.5 * 0.5 - 0.5 = -0.25
		  result = f(2); // 4 - sin(12.56); = 4 - 0.01


	printf("max = %.2f\n", result);
	return 0;
}



// #include <stdio.h>

// int maxInt(int x, int y){

// 	if (x > y) return x;
// 	else return y;
// }

// float maxFloat(float x, float y){

// 	if (x > y) return x;
// 	else return y;
// }

// int main(){

// 	float maximum = maxFloat(2.4, 2.39);



// 	printf("max = %.2f\n", maximum);
// 	return 0;
// }