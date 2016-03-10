#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double x, y, z;
	printf("Vvedite x: ");
	scanf("%lf", &x);
	if ((x < 8) && (x > -5)){
		printf("x E (-5,8)\n");
	} else {
		printf("x ne E (-5,8)\n");
	}
	printf("Vvedite y: ");
	scanf ("%lf", &y);
	if ((y < 8) && (y > -5)){
		printf("y E (-5,8)\n");
	}else {
		printf("y ne E (-5,8)\n");
	}
	printf("Vvedite z: ");
	scanf("%lf", &z);
	if ((z < 8) && (z > -5)){
		printf("z E (-5,8)\n");
	}else {
		printf("z ne E (-5,8)\n");
	}	
	system("PAUSE");
	return 0;
}
    
    
    
