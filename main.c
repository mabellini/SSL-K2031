#include <stdio.h>
#include "scanner.c"


int main (void){
  int value;
  while((value = get_token()) != FDT){
    switch(value){
      case CAD:
        printf("Cadena: '%s'\n", cadena);
        break;

      case SEP:
        printf("Separador: , \n");
        break;

      default:
        printf("token erroneo \n"); 
        break;
    }
  }
  printf("Fin de Texto\n");
  return 0;
}