#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 5
#include <limits.h>
int main () {
setlocale (LC_ALL, "");
int maiorValor = INT_MIN, menorValor = INT_MAX;
int vetor[TAM], numeros, pares = 0, impares = 0;
int positivos = 0, i, negativos = 0;
int contador = 0;
float soma, somaPares, somaImpares, mediaTotal, mediaPares, mediaImpares;


    for (i = 0; i < TAM; i++){
    printf ("Digite o %d° número: ", i+1);
    scanf ("%d", &numeros);
   
   
   
    vetor [i] = numeros;
   
    soma = soma + numeros;
mediaTotal = soma / 5;


   
    if (numeros != 0) {

             contador++;
   
    if (vetor [i] > maiorValor){
    maiorValor = vetor [i];
   }
   
   if (vetor [i] < menorValor){
    menorValor = vetor [i];
   }
}
   
    if (numeros < 0){
    negativos++;

if (numeros % 2 == 0 ){
  pares++;
}else {
impares++;
}
}

    if (numeros > 0){
    positivos++;

if (numeros % 2 == 0 ){
  pares++;
  somaPares+= numeros;
}else {
impares++;
somaImpares+= numeros;
}

if (numeros != 0) {
mediaPares= somaPares / pares;
}
if (numeros != 0) {
mediaImpares= somaImpares / impares;
}

}
}


system ("cls||clear");


printf ("\n=== Exibindo resultados ===\n");
printf ("\nQuantidade de números pares: %d", pares);
printf ("\nQuantidade de números impares: %d", impares);
printf ("\nQuantidade de números positivos: %d", positivos);
printf ("\nQuantidade de números negativos: %d", negativos);
printf ("\nQuantidade de Números: %d\n", contador);
printf ("\nMaior Número: %d", maiorValor);
printf ("\nMenor Número: %d\n", menorValor);
printf ("\nMédia dos números Pares: %.1f", mediaPares);
printf ("\nMédia dos números Impares: %.1f", mediaImpares);
printf ("\nMédia total dos números: %.1f\n", mediaTotal);

printf ("\n=== Exibindo números na ordem inversa ===\n");

for (i = TAM - 1; i >= 0; i--){
printf ("\n%i° Número: %i", i+1, vetor[i]);
}
 

return 0;
}
