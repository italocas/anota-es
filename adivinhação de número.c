#include <stdio.h>


int main(){

int n = 1;
int try = 3;
int nsorte = 7;
printf("bem vindo ao jogo");
while(n <= 3){
        printf("Digite um numero \n Tentativa: %d \n" , n );
        scanf("%d", & try);
     
     if( try == nsorte){
        printf("Voce acertou parabens\n");
        break;
     }
     else {
        printf ("Voce errou\n");

     }
n ++;
}
if(n > 3)
{
    printf("Suas tentativas acabaram. O numero da sorte era %d.\n", nsorte);
}
}