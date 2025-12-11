/* File : assigni.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Mengisi variabel i yg ber-type in dengan nilai 5 dan menuliskannya */
#include <stdio.h>

int main() {
    /* Kamus */
    int i ;

    i = 5; /* sekarang variabel i akan bernilai 5 */
    printf("Nilai I : %d \n", i);

    i = i + 5; /* nilai i ditambah 1, hasilnya disimpan kembali di i */
    printf("Nilai I : %d \n", i);

    return 0;
}