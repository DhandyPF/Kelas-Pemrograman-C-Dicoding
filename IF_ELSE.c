/* File : IF_ELSE.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* contoh pemakaian IF dua kasus komplementer */
/* Membaca sebuah nilai, */
/* menuliskan 'Nilai a positif , nilai a', jika a >= 0 */
/*            'Nilai a negatif , nilai a', jika a < 0  */
#include <stdio.h>

int main() {
    /* Kamus */
    int a;

    /* Program */ 
    printf("Contoh IF Dua Kasus \n");
    printf("Ketikkan Satu Nilai Integer : ");
    scanf("%d", &a);

    if (a >= 0) {
        printf("Nilai a Positif %d \n", a);
    } else { /* a< 0 */
        printf("Nilai a Negatif %d \n", a);
    }
    
    return 0;
}