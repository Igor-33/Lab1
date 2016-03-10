#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{  double x, y, c;
	printf("Vvedite x:");
	scanf("%lf", &x);
	printf("Vvedite y:");
	scanf("%lf", &y);
	printf("Vvedite c:");
	scanf("%lf", &c);
	
	printf("Increas number:");
	
   if ((x > y) && (x > c)) {
		printf("%.0lf\n", x);
	} else {
		if ((y > x) && (y > c)){
			printf("%.0lf\n", y);
		} else {
			if ((c > x) && (c > y)){
				printf("%.0lf\n", c);
			}
      }
	}
	
	system("PAUSE");
	return 0;
}
