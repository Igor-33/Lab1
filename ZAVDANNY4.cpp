#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int t;
	printf("How many time?: ");
	scanf("%d", &t);
	if ((t >= 6) && (t <= 11)){
		printf("Good morning\n");
	} else {
		if ((t >= 12) && (t <= 17)) {
			printf("Good day\n");
	} else {
		if ((t >= 18) && (t <= 24)){
				printf("Good night\n");
	} else {
	    if ((t >= 0) && (t <= 6)) {
					printf("Sladkih snov\n");
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}
    

