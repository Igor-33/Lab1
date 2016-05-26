#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int a=1;
	int b=2;
	
    printf("a = %d" , a);
    printf("b = %d", b);
	   
	  a=a-b; 
      b=a+2*b;	
      a=(b-a)/2;	
      b=(b-a);
      a=2;
      b=1;
	
    printf("\na = %d", a);
	printf("b = %d\n" , b);
    system("PAUSE");
    return 0;
}

