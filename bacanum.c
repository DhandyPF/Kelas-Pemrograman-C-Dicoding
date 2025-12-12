/* File : bacanum.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */                                                  
/* contoh membaca nilai numerik: bilangan bulat, bilangan riil */
/* kemudian menuliskan nilai yang dibaca */
#include <stdio.h>
int main() {
    /* Kamus */
    int a;
    float x;

    /* Program */
    printf("Contoh Membaca dan Menulis, Ketik Nilai Integer : ");
    scanf("%d", &a); /* membaca nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dg &a*/
    printf("Nilai Yang Dibaca : %d \n", a);

    printf("Ketik Nilai Sebuah Bilangan Riil : ");
    scanf("%f", &x); /* membaca nilai a yang bertype integer*/
    printf("Nilai Yang Dibaca : %f \n", x);

    /* coba ketik : scanf ("%d", a);dan tuliskan nilainya. Apa akibatnya ?*/
    /* coba ketik : scanf ("%f", x);dan tuliskan nilainya. Apa akibatnya ?*/

    return 0;
}