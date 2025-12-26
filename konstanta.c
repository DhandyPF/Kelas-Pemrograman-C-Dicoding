/* File : konstanta.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */       
/* Mendefinisikan konstanta bertype int, float, char  */
#include <stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 1
#define PI 3.1415

int main() {
    /* Kamus */
    const int maks = 3;
    const float param = 2.5;
    const char CC = 65;
    const char CA = 'A';

    /* Algoritma */
    printf("PI : %6.2f\n", PI);
    printf("NOL : %d\n", NOL);
    printf("SATU : %d\n", SATU);
    printf("FALSE : %d\n", FALSE);
    printf("Maks : %d\n", maks);
    printf("Param : %f\n", param);
    printf("CC : %c\n", CC);
    printf("CA : %c\n", CA);
    printf("%d\n", 3);
    printf("3\n"); /* tanpa memakai nama, tidak disarankan */
    
    return 0;
}