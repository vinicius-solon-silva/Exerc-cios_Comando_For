#include <stdio.h>

int main(void) {
  
  int a,b,i,acu;

  printf("\n Insira um numero para ser a base: ");
  scanf("%d",&a);
  printf("\n Insira o numero para ser a potencia: ");
  scanf("%d",&b);

  acu=a;
  
  for(i=1; i<b; i++){
    acu=acu*a;
    printf("\n%d\n",acu); 

  }
  
  printf("\nTotal de %d^%d: %d",a,b,acu);
}
