#include <stdio.h>

int factorial(int n);

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", factorial(n));
}

int factorial(int n) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return factorial(n-1)*n;
}