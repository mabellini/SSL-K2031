#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

enum{FDT,SEP,CAD};
char cadena[100] = {0};

void get_tokens();
int  scan();
#endif // SCANNER_H_INCLUDED