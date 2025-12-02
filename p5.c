/*Esfera: faça um programa que calcule e mostre o volume de uma esfera sendo 
fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. 
Considere (atribua) para pi o valor 3.14159. A saída deverá ter o formato:  VOLUME 
= V . O valor de V deverá ser apresentado com 3 casas após o ponto. 
Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3). */

#include <stdio.h>

int main() {
    double r;
    double volume;
    const double pi = 3.14159;

    printf("digite o valor do raio da esfera: ");
    scanf("%lf", &r);
    volume = (4.0/3.0) * pi * r * r * r;
    printf("Volume = %lf", volume);

    return 0;
}