/*Soma de ímpares consecutivos i: leia dois números inteiros e calcule a soma 
dos números ímpares entre eles (não inclusivo).*/

#include <stdio.h>

int main() {
    int i, j, soma = 0;
    int menor, maior;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &i);
    printf("digite o segundo numero inteiro: ");
    scanf("%d", &j);

    if (i < j) {
        menor = i;
        maior = j;
    } else {
        menor = j;
        maior = i;
    }

    for (int i = menor + 1; i < maior; i++) {
        
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf(" a soma dos impares entre %d e %d é: %d\n", menor, maior, soma);

    return 0;

}