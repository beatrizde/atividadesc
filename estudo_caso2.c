#include <stdio.h>

int main(void){
       int contador;   //número de notas digitadas 
       int nota;      // valor da nota 
       int total;    // soma das notas

float media; 

 total = 0; 
 contador = 0;
printf("Digite a nota, -1 no fim:"); // prompt para entrada 
scanf( "%d", &nota );

while (nota != -1) {
 total = total + nota; 
 contador = contador + 1;
printf("Digite a nota, -1 para finalizar:"); /* prompt para entrada */
scanf("%d", &nota); 
}


if ( contador != 0 ) {

media = (float) total / contador;
printf("Media da turma é %.2f\n", media);
} 
 else {

 printf("Nenhuma nota foi informada\n");

} 

return 0;


}