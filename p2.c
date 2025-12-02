/*Consumo_kml: leia a distância total percorrida (inteiro) e o combustível gasto 
(número real). Calcule o consumo_kml médio de um veículo e imprima o valor no 
formato: X.XXX km/l*/
#include <stdio.h>

int main() {
    int distancia_km;
    double combustivel_l, consumo_kml;

    printf("Digite a distancia_km percorrida pelo veiculo em Km: ");
    scanf("%d", &distancia_km);
    printf("Digite o combustivel_l gasto em L: ");
    scanf("%lf", &combustivel_l);

    consumo_kml = distancia_km / combustivel_l;

    printf("%.3lf km/l\n", consumo_kml);

    return 0;
}