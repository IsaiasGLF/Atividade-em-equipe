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
    printf ("Digite o %d� n�mero: ", i+1);
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
printf ("\nQuantidade de n�meros pares: %d", pares);
printf ("\nQuantidade de n�meros impares: %d", impares);
printf ("\nQuantidade de n�meros positivos: %d", positivos);
printf ("\nQuantidade de n�meros negativos: %d", negativos);
printf ("\nQuantidade de N�meros: %d\n", contador);
printf ("\nMaior N�mero: %d", maiorValor);
printf ("\nMenor N�mero: %d\n", menorValor);
printf ("\nM�dia dos n�meros Pares: %.1f", mediaPares);
printf ("\nM�dia dos n�meros Impares: %.1f", mediaImpares);
printf ("\nM�dia total dos n�meros: %.1f\n", mediaTotal);

printf ("\n=== Exibindo n�meros na ordem inversa ===\n");

for (i = TAM - 1; i >= 0; i--){
printf ("\n%i� N�mero: %i", i+1, vetor[i]);
}
 

return 0;
}
