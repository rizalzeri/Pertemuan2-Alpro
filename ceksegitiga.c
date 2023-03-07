/*Nama File 	: CekSegitiga.c*/
/*Deskripsi 	: Mengecek apakah 3 buah bilangan dapat membentuk segitiga sama sisi,kaki, atau sembarang*/
/*Pembuat   	: 24060120130062*/
/*Tgl Pembuatan	: 08-03-2021, 22:19 WIB*/

#include <stdio.h> /*header file*/
int main ()
{
    /*kamus*/
    int a;
    int b;
    int c;

    /*algoritma*/
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a > 0 && b > 0 && c > 0)
        {
            if (a == b && a== c)
            {
                printf("Segitiga sama sisi");
            }
            else if (a == b && a != c || a == c && a != b || b == c && a != c )
            {
                printf ("segitiga sama kaki");
            }
            else
            {
                printf("segitiga sembarang");
            }

        }
        else
        {
            printf("terdapat nilai yang bukan segitiga");
        }
    }
    else
    {
        printf("tidak memenuhi syarat segitiga");
    }
    return 0;
}
