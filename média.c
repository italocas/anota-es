#include <stdio.h>

int main(void){

float n1 , n2, media;
//média é 7
    printf("Insira a primeira nota do aluno:\n");
        scanf( "%f" , &n1);
    printf("Insira a segunda nota do aluno:\n");
        scanf( "%f" , &n2);
media = (n1 + n2) / 2 ;

if (media > 7) {
    printf ("O aluno foi reprovado com a media de %.f:\n" , media );
}
else{ printf("O aluno foi aprovado com a media de %.f:\n" , media) ;
}
return  0;
}
