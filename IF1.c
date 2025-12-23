/* File : IF1.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */                                                
/* contoh pemakaian IF satu kasus */
/* membaca nilai integer, menuliskan nilainya jika positif */
#include <stdio.h>

int main() {
    /* Kamus */
    int a;

    /* Program */
    printf("Contoh IF Satu Kasus \n");
    printf("Ketikkan Satu Nilai Integer : ");
    scanf("%d", &a);

    if (a > 5) {
        printf("a Lebih Besar Dari 5");
    } /* jika nilai a tidak positif maka program tidak melakukan apa-apa */

    return 0;
}