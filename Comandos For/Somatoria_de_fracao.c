#include <stdio.h>

int main(void){

  int  i, n;
  float soma, aux;
  float aux2; //auxilio estetico no printf
  
  printf("\n\nForneca um valor: ");
  scanf("%d", &n);
  soma = 0;
  printf("\nS = ");
  
  for(i=0; i<n; i++){
      aux = i+1;
      aux2 = (aux + (aux-1)); //auxilio estetico no printf
      soma += aux / aux2;
      if(i<n-1){printf("[%.0f/%.0f] + ", aux, aux2);}
      else{printf("[%.0f/%.0f]", aux, aux2);}
    }

  printf("\n\nResultado da somatoria: %.2f", soma);

  }
