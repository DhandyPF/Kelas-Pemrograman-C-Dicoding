/* File : random.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Pemakaian standard library untuk membangkitkan bilangan random */
#include <stdio.h>
#include <stdlib.h>

/************************/
int main() {
    const int MIN = 1;
    const int MAX = 100;

    /* Program akan membangkitkan 5 bilangan random antar MIN sampai MAX  */
    for (int i = 0; i < 10; i++) {
        printf("%d\n", rand()%MAX + MIN);
    }
    
    return 0;
}