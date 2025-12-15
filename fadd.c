/* File : fadd.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Fungsi yang menjumlahkan a+b */
#include <stdio.h>

int add(int a, int b) {
    /* fungsi bernama add yang menerima dua integer yaitu a dan b */
    /* dan mengirimkan hasil penjumlahan a+b */
    return(a + b);
}

int inkremen(int a) {
    /* Mengirimkan nilai a yang sudah ditambah dengan 1; perhatikan bahwa nilai a TIDAK DIUBAH*/
    return(a+1);
}

/************************/
int main(){
    int x = 10;
    int y = 25;

    /* pemakaian/pemanggilan fungsi add */
    printf("Hasil Penjumlahan x + y : %d\n", add(x,y));
    printf("Hasil Penjumlahan 3 + 2 : %d\n", add(3,2));

    /* pemakaian/pemanggilan fungsi inkremen */
    printf("Nilai x : %d\n", x);
    printf("Nilai x Setelah Ditambah 1 : %d\n", inkremen(x));
    printf("Nilai 5 Setelah Ditambah 1 : %d\n", inkremen(5));

    return 0;
}