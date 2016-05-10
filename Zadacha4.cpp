#include <cstdlib>
#include <iostream>

using namespace std;

   int main()
 {
    float n;
	printf("Vvedite Chislo:\n");
	scanf("%f", &n);
	  printf("\n%3.1f\n", n);
	  printf("\n%3.3f\n", n);
	  printf("\n%3.7f\n", n);
   	  printf("\n%e\n", n);	
    system("PAUSE");
    return 0;
  }
