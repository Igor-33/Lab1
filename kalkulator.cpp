#include <stdlib.h>
#include <stdio.h>
 

int main()
{
    int a,b,c;
    char z;
    printf("> ");
    scanf ("%d %c %d", &b,&z,&c);
    if(z=='+') 
    a=b+c;
    if(z=='-') 
    a=b-c;
    if(z=='*') 
    a=b*c;
    if(z=='/') 
    a=b/c;
    printf ("%d",a); 
    system("PAUSE");
    return 0;
}
