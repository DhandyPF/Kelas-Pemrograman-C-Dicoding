/* File : relasional.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Contoh perbandingan nilai numerik */
#include <stdio.h>

int main() {
    /* Kamus */
    int x = 5;
    int y = 8;

    /* Program */
    printf("Hasil Dari x > y : %d\n", x>y);
    printf("Hasil Dari x < y : %d\n", x<y);
    printf("Hasil Dari x >= y : %d\n", x>=y);
    printf("Hasil Dari x <= y : %d\n", x<=y);
    printf("Hasil Dari x == y : %d\n", x==y);
    printf("Hasil Dari x != y : %d\n", x!=y);

    printf("Hasil Dari x == x : %d\n", x==x);
    printf("Hasil Dari x != x : %d\n", x!=x);

    printf("Hasil Dari y == y : %d\n", y==y);
    printf("Hasil Dari y != y : %d\n", y!=y);

    return 0;
}