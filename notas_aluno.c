#include <stdio.h>
int main ( void)
{
int contador;   /* número da nota a digitar em seguida */
    int nota;     /* valor da nota */
 int total;   /* soma das notas inseridas pelo usuário */
 int média;   /* média das notas */

 
    total = 0; 
    
 contador = 1; 
    
    while ( contador <= 10 ) { 
       printf("Digite a notas do aluno:\n"); 
          scanf("%d",&nota); 
             total = total + nota;
    
contador = contador + 1; 
 } 
    
 
 média = total /10;

 printf( "Média da turma é %d\n", média );


     
 return 0;  
}
    