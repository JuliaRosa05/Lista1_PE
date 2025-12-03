/* Dividindo X por Y: leia um número inteiro N representando a quantidade de 
pares a serem processados. Para cada par X, Y imprima o resultado de X/Y, ou a 
mensagem: divisao impossível quando Y for igual a zero.*/

#include <stdio.h>

int main() {
    int n;
    int x, y;
    
    printf("Digite a quantidade de pares que vão ser processados: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        printf("Par %d/%d. Digite x e y: ", i + 1, n);
        scanf("%d %d", &x, &y);

        if (y == 0) {
            printf("divisao impossivel\n");
        } 
        else {
            double resultado = (double)x / y;
            printf("Resultado: %.2lf\n", resultado);
        }
    }

    return 0;
}