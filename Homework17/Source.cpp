#include<stdio.h>
int main()
{
	int i, j, x, z, num;
	int a, b, c, d;
	scanf_s("%d", &num);
	for (a = 1; a <= num; a++) {
		for (b = 1; b < a; b++) {
			printf(" ");
		}
		for (c = num; c > b; c--) {
			printf("*");
		}
		for (d = num; d >= a; d--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}