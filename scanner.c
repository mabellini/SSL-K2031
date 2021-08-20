#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "scanner.h"


int leer(){

  memset(cadena, 0, 100);
  int i = 0;
  char c;

  while((c = getchar())!=EOF){
    if(!isspace(c)){
      cadena[i] = c;
      if(c == ',' && i > 0){
        ungetc(',', stdin);
        cadena[i] = 0;
        return CAD;
      }
      if(c == ',')
        return SEP;
      i++;
      }
    else if(i != 0)
      return CAD;
    }
  if(i > 0){
    ungetc(EOF,stdin);
    return CAD;
  }
  else
    return FDT;
}

  int get_token(){
    int value;
    while((value = leer()) != FDT){
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
  }
