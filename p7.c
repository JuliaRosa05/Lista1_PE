/* Sort simples: leia três valores inteiros e apresente-os em ordem crescente. Em 
seguida, apresente os mesmos valores na ordem original, separados por uma linha 
em branco.*/

#include <stdio.h>

int main () {
    int a, b, c;

    printf("digite o primeiro valor (a): ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("digite o valor de c: ");
    scanf("%d", &c);

    int original_a = a;
    int original_b = b;
    int original_c = c;
    printf("valores em ordem crescente: ");

    if (a<= b && a <= c) {
        if(b <= c) {
            printf("%d\n%d\n%d\n", a, b, c);
        }else {
            printf("%d\n%d\n%d\n", a, c, b);
        }
    }
    else if (b <= a && b <= c) {
        if (a <= c) {
            printf("%d\n%d\n%d\n", b, a, c);
        } else {
            printf("%d\n%d\n%d\n", b, c, a);
        }
    } 
    else {
        if (a <= b) {
            printf("%d\n%d\n%d\n", c, a, b);
        } else {
            printf("%d\n%d\n%d\n", c, b, a);
        }
    }

    printf("\n");
    printf("%d\n%d\n%d\n", original_a, original_b, original_c);

    return 0;


}