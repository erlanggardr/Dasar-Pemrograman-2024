#include <stdio.h>

int main()
{
    /*
    Deklarasi variabel
    P = bagian pizza
    N = jumlah teman
    G = pizza yg didapatkan ghifari
    T = pizza yg didapatkan teman ghifari
    */
    int P, N, G, T;
    // input P, N
    scanf ("%d %d", &P, &N);

    // penghitungan T dan G
    T = P / N;
    G = P % N;

    // output
    printf ("Teman-teman mendapatkan %d potong :)\n", T);
    printf ("Ghifari mendapatkan %d potong :(", G);
}
