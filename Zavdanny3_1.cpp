#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float s, y;
	
	printf("\nVvedite 's': ");
	scanf("%f", &s);
	
	if ((-3 <= s)&&(s <= 5)) {
		y = s * s;
		printf("\nf(s)= %f", y);
	} else {
		y = 6 * s;
		printf("\nf(s)= %f", y);
	}
    
    system("PAUSE");
    return 0;
}
