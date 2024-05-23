#include <stdio.h>

int main() {
    float f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("A temperatura em Celsius deu: %.f\n", c);

    return 0;
}
