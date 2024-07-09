#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%c",(n > 90) ? 'A' : (n > 80) ? 'B' : 'F');
	return 0;
}