#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
	int n, x;

	printf("n: ");
	scanf("%d", &n);


	for (int i = 2; i <= n; i++) {
		x =(int) sqrt(i);
		if (sqrt(i) - x == 0) {
			x = 0;
		}
		if ((i % 2 == 0) && (x == 0)) {
			printf("%d", i);
		}

	}
	return 0;
}