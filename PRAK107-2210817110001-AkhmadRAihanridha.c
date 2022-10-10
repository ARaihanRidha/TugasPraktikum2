#include <stdio.h>

int main()
{
 
 int A,B,C,Keliling,Harga_tanah,Biaya;
 A = 4;
 B = 5;
 C =7;
 Keliling=A+B+C;
 Harga_tanah=85000;
 Biaya=Harga_tanah*Keliling;
 printf("Diketahui:\n");
 printf("Panjang sisi segitiga berturut-turut adalah %d,%d,dan %d\n",A,B,C);
 printf("Keliling Tanah Pak Dengklek adalah %d\n",Keliling);
 printf("Harga tanah permeter adalah %d\n",Harga_tanah);
 printf("Jawaban :\n");
 printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d",Biaya);

 
    return 0;

}