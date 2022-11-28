#include <stdio.h>

int main() {
float Uf,R,Uin,I;
printf("Vuvedi Uin:");
scanf("%f",&Uin);
printf("Vuvedi Uf:");
scanf("%f",&Uf);
printf("Vuvedi I:");
scanf("%f",&I);
R= (Uin-Uf)/(I*0.001);
printf("Resistance is: %.3f KОm", R);
return 0;
}