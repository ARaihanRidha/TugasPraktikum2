#include <stdio.h>

int main(){
    float Banyakputaran,JarakTempuh,phi,jarijari,kelilingLingkaran;
    phi = 3.14;
    Banyakputaran = 5;
    JarakTempuh=14;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",Banyakputaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n",JarakTempuh);

    printf("Jawaban :\n");
    kelilingLingkaran=JarakTempuh/Banyakputaran;
    jarijari=kelilingLingkaran/(phi*2);

    printf("Jari-jari yang dikelilingi Pak Dengklek adalah %.2f Kilometer",jarijari);

    return 0;





}