/* Aumento de salário: leia o valor de um salário e aplique o reajuste porcentual 
com base na faixa salarial. Imprima o novo salário, o valor do reajuste e o percentual 
utilizado*/
#include <stdio.h>

int main( ) {
    double salario_atual, novo_salario, reajuste;
    int percentual;

    printf("somente numeros\ndigite seu salario atual(reais): ");
    scanf("%lf", &salario_atual);

    if (salario_atual < 1500.00) {
        percentual = 20;
    }

    else if (salario_atual < 5000.00) {
        percentual = 15;
    }

    else {
        percentual = 10;
    }

    double fator_aumento = (double)percentual / 100.0;
    
    reajuste = salario_atual * fator_aumento;
    novo_salario = salario_atual + reajuste;

    printf("novo salario: R$ %.2lf\n", novo_salario);
    printf("valor do reajuste: R$ %.2lf\n", reajuste);
    printf("percentual utilizado: %d%%\n", percentual);

    return 0;
}