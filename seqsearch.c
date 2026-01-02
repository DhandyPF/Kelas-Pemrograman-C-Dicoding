/* File : seqsearch.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Menentukan posisi di mana elemen tabel bernilai X */
#include<stdio.h>
int main () {
    /* Kamus : */
    int i;
    int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
    int x = 99; /* indeks di mana Tab[max] bernilai maksimum */

    /* Algoritma sequential search paling sederhana */
    /* program berhenti pada indeks I di mana nilai diketemukan */
    i = 0;
    while ((Tab[i] != x) && (i < 9)) {
        i++;
    } /* Tab[i] == X atau i==9 */
    if (Tab[i] == x) {
        printf("Indeks Bernilai = %d\n", i);
    } else {
        printf("Nilai Tidak Ditemukan");
    }

    return 0;
}