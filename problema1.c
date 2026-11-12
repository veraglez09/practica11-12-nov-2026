/*Vera González Martínez
Ejercicio
problema1.c*/

#include <stdio.h>
#include <string.h>
// Prototipo o firma de las funciones del programa
void imprimir(char[]);

// Definicion o implementacion de la función main
int main(){
  char nombre[] = "Facultad de Ingenieria";
  imprimir(nombre);
  return 0;
}

// Implementacion de las funciones del programa
void imprimir(char s[]){
  int tam;
  for ( tam=strlen(s)-1 ; tam>=0 ; tam--)
    printf("%c", s[tam]);
  printf("\n");
}
