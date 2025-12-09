#include<stdio.h>
  int main(){
      int a,b,c;
      scanf("%d",&a);
      float sum = (a * 0.05);
            sum = a - sum ;
      printf("%.2f\n",sum);
      scanf("%d",&b);
      float sumb = (a+b) * 0.15;
       sumb = (a+b) - sumb;
      printf("%.2f\n",sumb);
      scanf("%d",&c);
      float sumc = (a+b+c) * 0.30;
       sumc = (a+b+c) - sumc;
      printf("%.2f\n",sumc);
  }
