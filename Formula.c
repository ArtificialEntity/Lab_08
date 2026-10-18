#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	double a;

	puts("Введите первое значение:");

	scanf("%lf", &a);

	double n;

	puts("Введите второе значение:");

	scanf("%lf", &n);

	double P = 1.0;

	for (int k = 0; k <= n; ++k)
	{
		P *= (a - k * n);
	}

	printf("Значение ряда: %.1lf", P);

	return 0;
}