#include<stdio.h>
  int main(){
      int a,b,c;
      scanf("%d",&a);
      float sum = (a * 0.05);
            sum = a - sum ;
      float vat = sum * 0.07;
            sum = sum + vat;
      printf("Promotion + Vat = %.2f\n",sum);
      scanf("%d",&b);
      float sumb = (a+b) * 0.15;
       sumb = (a+b) - sumb;
       float vat2 = sumb * 0.07;
       sumb = sumb + vat2;
      printf("Promotion + vat =  %.2f\n",sumb);
      scanf("%d",&c);
      float sumc = (a+b+c) * 0.30;
       sumc = (a+b+c) - sumc;
      float vat3 = sumc * 0.07;
       sumc = sumc + vat3;
      printf("Promotion + vat = %.2f\n",sumc);
  }
