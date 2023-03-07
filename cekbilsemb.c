/*Nama File 	: CekBilSemb.c*/
/*Deskripsi 	: Mengecek dan menampilkan input apakah bilangan atau bukan beserta tipe bilangannya*/
/*Pembuat   	: 24060120130062 - Rizal Zeri Subakti*/
/*Tgl Pembuatan	: 5 Maret 2021, 09:22*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{ /*Kamus*/
    int i;

  /*Algoritma*/
    //Input
    printf("Masukkan i: ");

    //Proses
    if(scanf("%d", &i) == 1){
        if (i > 0){
            printf("Bilangan bulat positif");
        }
        else if (i == 0){
            printf("Nol");
        }
        else {
            printf("Bilangan negatif");
        }
    }
    else {
        printf("Not a number");
    }
  return 0;
}

