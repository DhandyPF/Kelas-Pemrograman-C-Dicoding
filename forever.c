/* File : forever.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Loop terus menerus, akan sering dipakai untuk program menunggu event */
#include <stdio.h>

int main() {
    /* Kamus */

    /* Program */
    printf("Program Akan Looping, Akhiri Dengan CTRL-C");
    while (1) /* atau for (;;) */ {
        printf("Tunggu ^c....\n");
        /* program akan terus menerus dijalankan, sampai diinterupsi*/
        /* cara interupsi adalah dengan menekan tombol [Ctrl] dan tombol "c" bersamaan*/
    }
    
    return 0;
}