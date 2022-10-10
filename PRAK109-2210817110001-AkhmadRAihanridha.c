#include <stdio.h>
#include <math.h>
int main(){
int jumlah_passukan_Yuzhong,jumlah_pahlawan,pasukan_yang_setiap_pahlawan_kalahkan;

jumlah_passukan_Yuzhong=958730;
jumlah_pahlawan= 5;


printf("Jumlah pasukan yang dibawa Yu zhong = %d\n", jumlah_passukan_Yuzhong);
printf("Jumlah pahlawan =%d\n",jumlah_pahlawan);

pasukan_yang_setiap_pahlawan_kalahkan= jumlah_passukan_Yuzhong/jumlah_pahlawan;
printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d\n",( pasukan_yang_setiap_pahlawan_kalahkan),"pasukan");


return 0;

}