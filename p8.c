/* Tempo de jogo com minutos: leia hora e minuto de início e término de um jogo. 
Calcule a duração total em horas e minutos. Considere que o jogo pode ultrapassar 
a meia-noite.*/

#include <stdio.h>

int main( ) {
    int h_i, m_i;
    int h_f, m_f;
    int min_inicio, min_final, dur_min;
    int dur_horas, dur_min_fin;
    const int minutos_dia = 1440;

    printf("Hora de inicio(h): ");
    scanf("%d", &h_i);
    printf("Minuto de inicio(m): ");
    scanf("%d", &m_i);

    printf("Hora de termino(h): ");
    scanf("%d", &h_f);
    printf("Minuto de termino(m): ");
    scanf("%d", &m_f);

    min_inicio = (h_i * 60) + m_i;
    min_final = (h_f * 60) + m_f;

    if (min_final <= min_inicio) {
        dur_min = (min_final + minutos_dia) - min_inicio;
    } else{
        dur_min = min_final - min_inicio;
    }

    dur_horas = dur_min / 60;
    dur_min_fin = dur_min % 60;

    printf("o jogo durou %d hora(s) e %d minuto(s)", dur_horas,dur_min_fin);

    return 0;
}