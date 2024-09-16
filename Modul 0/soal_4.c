#include <stdio.h>

int main()
{
    int A,B,C,D,E;
    scanf ("%d %d %d %d %d", &A,&B,&C,&D,&E);
    
    float jumlah = A+B+C+D+E;
    float rata_rata = jumlah/5;
     
    printf ("%.0f %.1f", jumlah, rata_rata);
}