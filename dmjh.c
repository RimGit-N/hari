#include <stdio.h>
int main(){
  long d,m,j,h;
  printf("\nHari: ");(void)!scanf("%ld",&h);d=86400*h;printf("%ld Hari = %ld Detik\n",h,d);
  printf("\nJam: ");(void)!scanf("%ld",&j);d=3600*j;printf("%ld Jam = %ld Detik\n",j,d);
  printf("\nMenit: ");(void)!scanf("%ld",&m);d=60*m;printf("%ld Menit = %ld Detik\n\n",m,d);
  return 0;
}
