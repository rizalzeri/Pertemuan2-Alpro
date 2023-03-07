/*Nama File 	: CekBulan.c*/
/*Deskripsi 	: Menampilkan nama hari dari sebuah nomor*/
/*Pembuat   	: <24060120130062-Rizal Zeri Subakti>*/
/*Tgl Pembuatan	: <08-03-2021, 21:21 WIB>*/

#include <stdio.h> /*header file*/

int main()
{
    //kamus
    int i;

    //algoritma
    printf("masukkan nomor bulan : ");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("Bulan Januari");
    }
    else if (i == 2)
    {
        printf("Bulan Februari");
    }
    else if (i == 3)
    {
        printf("Bulan Maret");
    }
    else if (i == 4)
    {
        printf("Bulan April");
    }
    else if (i == 5)
    {
        printf("Bulan Mei");
    }
    else if (i == 6)
    {
        printf("Bulan Juni");
    }
    else if (i == 7)
    {
        printf("Bulan Juli");
    }
    else if (i == 8)
    {
        printf("Bulan Agustus");
    }
    else if (i == 9)
    {
        printf("Bulan September");
    }
    else if (i == 10)
    {
        printf("Bulan Oktober");
    }
    else if (i == 11)
    {
        printf("Bulan November");
    }
    else if (i == 12)
    {
        printf("Bulan Desember");
    }
    else
    {
        printf("Masukkan nomor bulan tidak tepat");
    }

    return 0;
}

