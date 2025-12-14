/* File : boolOP.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Contoh perhitungan aljabar boolen, perhatikan cara penulisan
AND dan OR serta NOT */
#include <stdio.h>

int main() {
    /* Kamus */
    int TRUE = 1;
    int FALSE = 0;

    /* Algoritma  */
    printf("Hasil Dari TRUE && TRUE : %d \n", TRUE && TRUE);
    printf("Hasil Dari TRUE && FALSE : %d \n", TRUE && FALSE);
    printf("Hasil Dari FALSE && TRUE : %d \n", FALSE && TRUE);
    printf("Hasil Dari FALSE && FALSE : %d \n", FALSE && FALSE);
    printf("Hasil Dari TRUE || TRUE : %d \n", TRUE || TRUE);
    printf("Hasil Dari TRUE || FALSE : %d \n", TRUE || FALSE);
    printf("Hasil Dari FALSE || TRUE : %d \n", FALSE || TRUE);
    printf("Hasil Dari FALSE || FALSE : %d \n", FALSE || FALSE);
    printf("Hasil Dari !TRUE : %d \n", !TRUE);
    printf("Hasil Dari !FALSE : %d \n", !FALSE);

    return 0;
}