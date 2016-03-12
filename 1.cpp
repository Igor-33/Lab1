#include <cstdlib>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float x, y, n;
    
    printf("Vvediti x : ");
    scanf("%f", &x);
    
    printf("Vvediti n :  ");
    scanf("%f", &n);  
   
    y=x*x+3*n;
    printf("y=%f", y);
    
    system("PAUSE");
    return 0;
}
