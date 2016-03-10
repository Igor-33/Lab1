#include <cstdlib> 
#include <iostream> 
#include <stdio.h> 


float y (float x, float a, float b) 
{ 
float y; 
y = a + b * x; 
return y; 
} 

int main() 
{ 
float y1; 
y1 = y (3, 1, 1); 
printf ("%f", y1); 
system("Pause");
}

