/*Nama File 	: CekHari.c*/
/*Deskripsi 	: Menampilkan nama bulan dari sebuah nomor*/
/*Pembuat   	: <24060120130062-Rizal Zeri Subakti>*/
/*Tgl Pembuatan	: <08-03-2021, 21:21 WIB>*/

#include <stdio.h>/*header file*/

int main()
{
    //kamus
    int i;

    //algoritma
    printf("masukkan nomor hari : ");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("Hari senin");
    }
    else if (i == 2)
    {
        printf("Hari Selasa");
    }
    else if (i == 3)
    {
        printf("Hari Rabu");
    }
    else if (i == 4)
    {
        printf("Hari Kamis");
    }
    else if (i == 5)
    {
        printf("Hari Jumat");
    }
    else if (i == 6)
    {
        printf("Hari Sabtu");
    }
    else if (i == 7)
    {
        printf("Hari Minggu");
    }
    else
    {
        printf("Masukkan nomor hari tidak tepat");
    }

    return 0;
}
