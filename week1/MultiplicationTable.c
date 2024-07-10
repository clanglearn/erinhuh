#include <stdio.h>

int main(void) {
	int num1 = 1;
	while (num1 < 4) 
	{
		int num2 = 1;
		while (num2 < 10) 
		{
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			num2++;
		}
		num1++;
	}

	do 
	{
		int num2 = 1;
		do 
		{
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			num2++;
		} while (num2 < 10);
			num1++;
	} while (num1 < 7);

	for (num1=7;num1<10;num1++)
		for (int num2=1;num2<10;num2++)
			printf("%d * %d = %d\n", num1, num2, num1 * num2)
	return 0;
}