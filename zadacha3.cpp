
#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char *argv[])
{
    float a, b, c;
    printf("Vvediti a : ");
    scanf("%f", &a);
    printf ("%f", a);
    printf("\nVvediti b : ");
    scanf("%o", &b);
    printf("%o", b);
    printf("\nVvediti c : ");
    scanf("%x", &c);
    printf ("%x", c);
    system("PAUSE");
}
