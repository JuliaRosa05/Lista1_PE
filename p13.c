/* Maior e posição: leia 10 números inteiros. Identifique o maior valor e apresente 
sua posição relativa (1 a 10). */

#include <stdio.h>

int main() {
    int numero;
    int maior_valor = 0;
    int posicao_maior = 0;

    printf("Digite 10 numeros inteiros:\n"); 

    for (int i = 1; i <= 10; i++) {
        
        printf("numero %d: ", i); 
        
        scanf("%d", &numero); 

        if (numero > maior_valor) {
            maior_valor = numero;
            posicao_maior = i;
        }
    }

    printf("%d\n", maior_valor);
    printf("%d\n", posicao_maior);

    return 0;
}