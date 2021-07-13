#include <stdio.h>

int main(void) {
  
  int i, p, acu=1;

  printf("\nDigite o valor da potencia que ira elevar 2: ");
  scanf("%d",&p);

  for(i=0; i<p; i++){
    acu=2*acu;
    printf("\n%d",acu);
  }
 
  printf("\n\nTotal da potencia de 2 elevado a %d e: %d",p,acu);
}
