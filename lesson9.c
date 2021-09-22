#include <stdio.h>
#include <math.h>

int main(){

	float a = 3;
	float b = 4;
	float c = 6;

	// a+b >c и a+c > и b+c > a
	if ((a+b) > c && (a+c) > b && (b+c) > a) {
		// если треугольник будет правильный 

		float p = (a + b + c) / 2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));

		float ha = (2.0/a) * s;
		float hb = (2.0/b) * s;
		float hd = (2.0/c) * s;

		printf("ha = %.1f\n", ha);
		printf("hb = %.1f\n", hb);
		printf("hc = %.1f\n", hc);


	} else {
		// вывод ошибки
		printf("Не правильные значения a, b, c \n");


	}	

	return 0;

}


// #include <stdio.h>

// int main(){

// 	const int x = 0;  // номер x-i
// 	const int y = 1;	// номер y-i

// 	int A[2] = {1, 2};
// 	int B[2] = {4, 8};


// 	int dx = B[x] - A[x]; // x2 - x1
// 	int dy = B[y] - B[y]; // y2 - y1

// 	printf("Расстояние между А и В по х: %i \n", dx);
// 	printf("Расстояние между А и В по y: %i \n", dy);

// 	return 0;
// }