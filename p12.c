/*Tabuada: leia um número inteiro e apresente sua tabuada multiplicativa de 1 a 
20.*/

#include <stdio.h>

int main () {

    int n;

    printf("digite um numero inteiro para calcular a tabuada: ");
    scanf("%d", &n);

    printf("sua tabuada de 1 a 20", n);

    for (int i = 1; i <= 20; i++) {
        int resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    return 0;

}