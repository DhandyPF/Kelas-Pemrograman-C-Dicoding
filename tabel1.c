/* File : tabel1.c */
/* Penulis : Dhandy, email dhandy.fahruddin@mhs.unsoed.ac.id */
/* Deskripsi : */
/* Mendefinisikan array dan mengisi nilainya */
#include <stdio.h>

int main() {
    /* Kamus : */
    /* Kamus */
    int Tab[5] = {1, 2, 3, 4, 5}; /* Tab[0]=1; Tab[1]=2; . .. Tab[4]=5 */
    float TabX[3] = {1.5, 3.5E2, 9.99};
    char Tabchar[4] = {'1', '2', '@', 'Z'};

    int i; /* untuk iterasi indeks tabel */
    /* menuliskan isi Tab berderet ke kanan*/
    for (i = 0; i < 5; i++) {
        printf("Tab[%d] = %d\n", i, Tab[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("TabX[%d] = %5.2f\n", i, TabX[i]);
    }
    
    for (i = 0; i < 4; i++) {
        printf("Tabchar[%d] = %c\n", i , Tabchar[i]);
    }
    
    
    return 0;
}