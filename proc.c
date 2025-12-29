/* File : proc.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Contoh program utama dan prosedur untuk menukar 2 buah nilai */
#include <stdio.h>

void plus1(int* a) {
    /* prosedur menambahkan 1 ke parameter a */
    /* "*a" artinya isi dari lokasi yang ditunjuk oleh a */
    int temp;
    *a = *a + 1;
}

void plusd(int* a, int d) {
    /* prosedur menambahkan d ke parameter a */
    /* nilai a akan diubah, sedangkan nilai d tidak diubah */
    int temp;
    *a = *a + d;
}

void swap(int* a, int* b) {
    int temp;
    temp = (*a);
    *a = (*b);
    *b = temp;
}

int main() {
    int i = 9;
    int x = 10;
    int y = 25;
    int d = 7;

    plus1(&i); /* perhatikan saat pemanggilan &i */ 
    printf("Nilai i + 1 : %d\n", i);

    i = 8;
    plusd(&i, d); /* perhatikan saat pemanggilan &i dan d */ 
    printf("Nilai i + 7 : %d\n", i);

    plusd(&d, 3); /* perhatikan saat pemanggilan &i */ 
    printf("Nilai d + 3 : %d\n", d);

    printf("Nilai x Dan y : %d, %d\n", x,y);
    swap(&x, &y);
    printf("Nilai x Dan y Setelah Swap : %d, %d\n", x,y);

    return 0;
}