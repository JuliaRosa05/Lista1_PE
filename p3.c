/*Distância: dois carros se deslocam em sentidos opostos com velocidades de 
60 km/h e 90 km/h. Dado um valor em quilômetros representando a distância entre 
eles, calcule o tempo necessário em minutos para que essa diferença seja 
alcançada.*/
#include <stdio.h>

int main() {
    double distancia_km;
    double tempominutos;
    double velocidade_relativa = 150.0;
    printf("Digite a velocidade que os carros deve atingir (km): ");
    scanf("%lf", &distancia_km);

    double tempo_horas = distancia_km / velocidade_relativa;
    tempominutos = tempo_horas * 60.0;

    printf("Tempo necessario: %lf minutos", tempominutos);

    return 0;
}