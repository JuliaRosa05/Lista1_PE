/* Média 1: leia dois valores decimais A e B. Calcule a média ponderada usando 
pesos 3.5 e 7.5 e imprima o resultado com cinco casas decimais no formato: MEDIA 
= X */

#include <stdio.h>

int main () {
    double a,b,media;
    printf("Iremos calcular uma média ponderada\n Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);

    media = ((a * 3.5) + (b*7.5)) / 11.0;
    printf("MEDIA = %.5lf\n", media);

    return 0;
}