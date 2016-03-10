#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   float x;
	printf("Vvedite nomer mesyaza:\n");
	scanf("%f", &x);
	if ((x <= 2) && (x >= 1)) {
		printf("Winter ");
	} else {
		if (x == 12) {
			printf("Winter ");
		} else {
			if ((x >= 3) && (x <= 5)) {
				printf("Sprint ");
			} else {
				if ((x >= 6) && (x <= 8)) {
					printf("Summer ");
				} else {
					if ((x >= 9) && (x <= 11)) {
						printf("Outem ");
					}
				}
			}
		}
	}
	system("Pause");
	return 0;
}
