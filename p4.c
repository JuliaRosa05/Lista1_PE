/* Conversão de tempo: leia um valor inteiro N representando o total de segundos. 
Converta o valor para o formato: horas:minutos:segundos */

#include <stdio.h>
int main() {
    int total_segundos_n;
    int horas,minutos, segundos;
    int resto_apos_horas;

    printf("Iremos converter segundos em horas e minutos\nDigite o total de segundos: ");
    scanf("%d", &total_segundos_n);
     
    horas = total_segundos_n / 3600;
    resto_apos_horas =total_segundos_n % 3600;
    minutos = resto_apos_horas / 60;
    segundos = resto_apos_horas % 60;

    printf("%d:%d;%d\n", horas,minutos,segundos);

    return 0;
}