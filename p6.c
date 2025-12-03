/* Coordenadas de um ponto: leia dois valores reais x e y e determine a localização 
do ponto no plano cartesiano: quadrante, eixo ou origem. */

#include <stdio.h>

int main() {
    double x,y;

    printf("Digite a coordenada X: ");
    scanf("%lf", &x);
    printf("digite a coordenada Y: ");
    scanf("%lf", &y);

    if (x == 0.0 && y == 0.0) {
        printf("Origem");
    
    }
    else if (x == 0.0) {
        printf("Eixo Y");
    }
    else if (y == 0.0) {
        printf("Eixo X");
    }

    else if (x > 0.0 && y > 0.0) {
        printf("Q1");
    } 
    else if (x < 0.0 && y > 0.0) {
        printf("Q2");
    } 
    else if (x < 0.0 && y < 0.0) {
        printf("Q3");
    }
    else{
        printf("Q4");
    }

    return 0;
}