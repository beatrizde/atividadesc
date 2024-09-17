#include <stdio.h>
int main (void)
{
int soma = 0;
int numero;

   for( numero = 2; numero <= 100; numero += 2){
    soma += numero;
   }
   printf("Soma é %d\n", soma);
   return 0;
}