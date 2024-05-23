#include <stdio.h>

int main(void) {
    float base, h, area;
printf("Calcule a area do triangulo")
    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &h);

    area = (base * h) / 2;

    printf("A area e: %.f\n", area);

    return 0;
}

