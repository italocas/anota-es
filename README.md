# REVISAO GERAL

array é uma estrutura de dados que aramzena uma coleção de elementos.
tipos básicos em C:

° tipos de dados - Variáveis -
int - números inteiros sem fração (32bites)
char - caracteres ou strings (8bites)
float - números com parte fracionária (32bites)
double - números com deicimais mais precisos (64bites)

Como um loop funciona:

for (inicialização; condição; atualização) {
    // código a ser repetido
}
for (inicialização; condição; atualização) {
    // código a ser repetido
}

Vetor: 
É uma coleção de elementos do mesmo tipo, armazenados na memória;
Cada elemento pode ser acessado através de um indice;

int numeros[5] = {10, 20, 30, 40, 50};

Índice:   0   1   2   3   4
         +---+---+---+---+---+
numeros: |10 |20 |30 |40 |50 |
         +---+---+---+---+---+

Struct:(estrutura) 
Agrupar variáveis de diferentes tipos sob um mesmo nome.
Um conjunto condiz a uma única entidade.

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

criar um vetor com variável dessa estrutura:
int main() {
    Pessoa pessoas[3] = {
        {"João", 30, 1.75},
        {"Maria", 25, 1.65},
        {"José", 28, 1.80}

gero um loop para printar cada dado de cada pessoa

for (int i = 0; i < 3; i++) {
    printf("Pessoa %d:\n", i + 1);
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n", pessoas[i].idade);
    printf("Altura: %.2f\n\n", pessoas[i].altura);
}

representação vetor 

Pessoa pessoa1:
+--------------------+------+-------+
|       nome         | idade| altura|
+--------------------+------+-------+
| "João"             |  30  |  1.75 |
+--------------------+------+-------+


Índice:    0                1               2
         +----------------+----------------+----------------+
         | Pessoa         | Pessoa         | Pessoa         |
         +----------------+----------------+----------------+
pessoas: | nome: "João"   | nome: "Maria"  | nome: "José"   |
         | idade: 30      | idade: 25      | idade: 28      |
         | altura: 1.75   | altura: 1.65   | altura: 1.80   |
         +----------------+----------------+----------------+


