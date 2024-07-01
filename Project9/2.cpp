#include <stdio.h>

int main() {
	int a = 0, b = 1, c = 0, n, i = 0;

	printf("n값을 입력하시오: ");
	scanf("%d", &n);

	for (i = 1; i <= n-1; i++) {
		c = a + b;
		a = b;
		b = c;
		
	}
	if (n == 1) {
		a = 0;
	}

	printf("%d  ", a);
}