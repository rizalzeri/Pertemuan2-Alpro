/*Nama File 	: CekSeriPositif.c*/
/*Deskripsi 	: Mengecek dan enghitung tiga bilangan positif*/
/*Pembuat   	: 24060120130062*/
/*Tgl Pembuatan	: 08-03-2021, 22:14 WIB*/

#include <stdio.h> /*header file*/

int main ()
{
    /*kamus*/
    int a;
    int b;
    int c;
    int hasil;
    /*algoritma*/
    printf("Masukkan nilai a = ");
    scanf("%d", &a);
    printf("Masukkan nilai b = ");
    scanf("%d", &b);
    printf("Masukkan nilai c = ");
    scanf("%d", &c);
    if (a && b && c > 0)
    {
        hasil = a + b + c;
        printf("hasilnya = %d", hasil);
    }
    else
    {
        printf("masukkan tahanan tidak boleh negatif");
    }





    return 0;
}
