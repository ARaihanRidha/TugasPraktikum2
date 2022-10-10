#include <stdio.h>
#include <math.h>

int main(){
int A,t,C,Keliling,Luas;

A = 5;
t =12;

printf("Diketahui:\n");
printf("Alas = %dcm\n",A);
printf("Tinggi =%dcm\n", t);

printf ("Jawab :\n");
C=(sqrt(A*A + t*t));

printf("Sisi A = %d cm \n",t);
printf("Sisi B = %d cm \n",C);
printf("Sisi C= %d cm\n",A);
Keliling = A + t + C;
printf("Keliling = %d cm\n",Keliling);
Luas=0.5*A*t;
printf("Luas = %d cm\n",Luas);




}