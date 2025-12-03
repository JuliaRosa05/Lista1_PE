/* Fórmula de Bhaskara: leia três valores reais A, B e C. Calcule as raízes reais de 
uma equação do segundo grau usando a fórmula de Bhaskara. Se A = 0 ou o 
discriminante (delta) < 0, imprima: Impossível calcular */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta;
    double r1, r2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0.0) {
        printf("Impossivel calcular\n");
    } 
    else {
        delta = (b * b) - (4.0 * a * c);

        if (delta < 0.0) {
            printf("Impossível calcular\n");
        } 
        else {
            r1 = (-b + sqrt(delta)) / (2.0 * a);
            r2 = (-b - sqrt(delta)) / (2.0 * a);

            printf("R1 = %.5lf\n", r1);
            printf("R2 = %.5lf\n", r2);
        }
    }
    return 0;
}