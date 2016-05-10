#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a, s;
    printf("\nVvediti kilkist god: ");
    scanf("%d", &a);
    s = a%10;
    if (s==1) {
              printf("\nGod ", a);
      }  else  {
        if ((s > 1) && (s < 5)) {
          printf("\nGoda ");
              } else {
                printf("\nLet ");            
                }
                }
    system("PAUSE");
    return 0;
}
