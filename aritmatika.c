/* File : aritmatika.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Operasi aritmatika bilangan integer dan bilangan riil :
Menuliskan jumlah, hasil perkalian, pembagian, modulo
dua buah variabel integer*/
#include <stdio.h>

int main() {
    /* Kamus */
    int x = 5;
    int y = 8;

    /* Program */
    printf("Hasil Dari 5 + 8 = %d\n", x+y);
    printf("Hasil Dari 5 - 8 = %d\n", x-y);
    printf("Hasil Dari 5 * 8 = %d\n", x*y);
    printf("Hasil Dari 5 / 8 = %d\n", x/y);
    printf("Hasil Dari 8 / 5 = %d\n", y/x);
    printf("Hasil Dari 5 mod 8 = %d\n", x%y);
    printf("Hasil = %d\n", x+x+x*x*x);

    /* bandingkan dengan operasi pembagian bilangan riil */
    float a = 5;
    float b = 8;
    printf("Hasil Dari 5 / 8 = %-5.2f\n", a/b);
    printf("Hasil Dari 8 / 5 = %5.2f\n", b/a);

    return 0;
}