
#include <stdio.h>

int main(void) {
    int v1, v2, v3;
    float media;

    printf("Digite tres valores inteiros espaçados e precione enter: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    media = (v1 + v2 + v3) / 3.0;

    printf("A media resultou em: %.f\n", media);

    return 0;
}

