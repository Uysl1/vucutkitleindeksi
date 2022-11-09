#include <stdio.h>
int main(){
float kg,b,in;
printf("Kilonuzu girin:");
scanf("%f",&kg);
printf("Boyunuzu girin:");
scanf("%f",&b);
b = b*b;
in = kg/b;
printf("Vucut kitle indeksiniz:%f\n",in);
if (in< 18 ){
printf("Zayifsiniz:");
}
else if(in>18.5 && in<25){
printf("Kilonuz normal:");
}
 else if(in>=25 && in<30){
printf("Kilolusunuz:");
}
else if(in>=30 && in<35){
printf("Obessiniz:");
}
 else if(in>=35){
printf("Extra obessiniz:");
}

return 0;
}