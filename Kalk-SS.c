    /*Nama File 	: Kalk-ss.c*/
/*Deskripsi 	: template penulisan program bahasa C*/
/*Pembuat   	: 24060120130062*/
/*Tgl Pembuatan	: 08-03-2021, 22:14 WIB*/

#include <stdio.h> /*header file*/

int main()
{
    /*kamus*/
    int iA;
    int iB;
    char oper;
    int hasil;
    /*algoritma*/
    printf("Masukkan operasi = ");
    scanf(" %s", &oper);
    if (oper == 'a')
    {
        printf("Masukkan nilai iA = ");
        scanf(" %d", &iA);
        printf("Masukkan nilai iB = ");
        scanf(" %d", &iB);
        hasil = iA + iB;
        printf("%d", hasil);
    }
    else if (oper == 'b')
    {
        printf("Masukkan nilai iA = ");
        scanf(" %d", &iA);
        printf("Masukkan nilai iB = ");
        scanf(" %d", &iB);
        hasil = iA - iB;
        printf("%d", hasil);
    }
    else if (oper == 'c')
    {
        printf("Masukkan nilai iA = ");
        scanf(" %d", &iA);
        printf("Masukkan nilai iB = ");
        scanf(" %d", &iB);
        hasil = iA * iB;
        printf("%d", hasil);
    }
    else if (oper == 'd')
    {
        printf("Masukkan nilai iA = ");
        scanf(" %d", &iA);
        printf("Masukkan nilai iB = ");
        scanf(" %d", &iB);
        hasil = iA / iB;
        printf("%d", hasil);
    }
    else if (oper == 'e')
    {
        printf("Masukkan nilai iA = ");
        scanf(" %d", &iA);
        printf("Masukkan nilai iB = ");
        scanf(" %d", &iB);
        hasil = iA / iB;
        printf("%d", hasil);
    }
    else if (oper == 'f')
    {
        printf("Masukkan nilai iA = ");
        scanf(" %f", &iA);
        printf("Masukkan nilai iB = ");
        scanf(" %f", &iB);
        hasil = iA % iB;
        printf("%f", hasil);
    }







    return 0;
}
