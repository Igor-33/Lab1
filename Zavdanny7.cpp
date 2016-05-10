#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main ()
{
	int n, x, x2, x3;
	
	printf("\nVvedite god: ");
	scanf("%d", &n);
	x = n%4;
	x2 = n%100;
	x3 = n%400;
	
	if ((x2 == 0)&&(x3 != 0)) {
		printf("\n 365 dney.\n");
	} else {
		if (x == 0) {
			printf("\n 366 dney.\n");
		} else {
			printf("\n 365 dney.\n");
		}
	}
	system ("Pause");
	return 0;
}

