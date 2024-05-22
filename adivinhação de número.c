#include <stdio.h>

int main(){
int tentativas = 1, numero = 3 , nsorte = 7;

puts("bem vindo ao jogo de adivinhacao");
while(tentativas <= 3){
        printf("Digite um numero para tentar adivinhar: \n Tentativa %d de 3 \n" , tentativas );
        scanf("%d", & numero);
     if( numero == nsorte){
        puts("Voce acertou parabens!!\n");
        break;
     }
     else {
        printf ("Voce errou\n");
     }
tentativas ++;
}
if(tentativas > 3)
{
    printf("Suas tentativas acabaram. O numero da sorte era %d.\n", nsorte);
}
}
