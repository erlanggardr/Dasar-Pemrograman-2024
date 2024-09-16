#include <stdio.h>

int main()
{
    int a,b,c;
    scanf ("%d %d %d", &a, &b, &c);

    float pembagian = (float)(a+b)/c;
    
    printf ("%.2f", pembagian);
}