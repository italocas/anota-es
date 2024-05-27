# Depósito para as aulas de lógica de programação
---
→ Revisão geral por tópicos

 ★ ʟɪɴɢᴜᴀɢᴇᴍ   ᴄ ★

1. **Variáveis:**
* Declaração de variáveis: Utilize o tipo de dado seguido pelo nome da variável. Exemplo: int numero;
* Atribuição de valor: Atribua um valor a uma variável utilizando o operador de atribuição =. Exemplo: numero = 10;
* Leitura e impressão de variáveis: 
**%d para int**, número inteiro
**%c para char**,  texto
**%f para float**,  número decimal, max 6 digitos
**%lf para double**, número decimal, max 15 digitos
**%s para strings**, Array de caracteres
>sizeof(nome da variável) para número de bites

* **constante**  ```#define```, mantém um valor fixo seja ele um número ou um "TEXTO"
2. Instruções de pré-processamento: **(bibliotecas)**

* **#include <stdlib.h>**:
Esta biblioteca fornece funções para alocação de memória dinâmica, conversão de tipos, geração de números aleatórios, entre outras.

* **#include <locale.h>**:
Essa biblioteca é utilizada para configurações de localidade, permitindo a formatação de números, datas e moedas de acordo com as convenções culturais específicas de uma determinada região.

* **#include <string.h>**:
Oferece funções para manipulação de strings, como cópia, concatenação, comparação, entre outras.

* **#include <math.h>**:
Contém funções matemáticas, como funções trigonométricas, logaritmos, exponenciais, etc.

* **#include <ctype.h>**:
Fornece funções para manipulação de caracteres, como conversão entre maiúsculas e minúsculas, testes de caractere, entre outros.

* **#include <time.h>**:
Essa biblioteca é usada para manipulação de tempo, permitindo a obtenção do tempo atual, manipulação de estruturas de tempo e conversões entre representações de tempo.

* **#include <stdbool.h>**:
Esta biblioteca define o tipo bool e os valores true e false, permitindo o uso de valores booleanos em C.

3. **Operadores**
>Operadores aritméticos : (operação matemática)
* Operadores de atribuição aritmética
* Incremento de 1 em 1 unidade: **++**
* Decremento de 1 em 1 unidade: **- -**
* Incremento genérico: **+=**
* Decremento genérico: **-=**
* Atribuição com multiplicação: ***=**
* Atribuição com divisão: **/=**
* Atribuição com resto: **%=**

>Operadores relacionais: (comparar valores)
* Igualdade: **==**
* Diferença: **!=**
* Maior do que: **>**
* Menor do que: **<**
* Maior ou igual: **>=**
* Menor ou igual: **<=**

>Operadores lógicos (verdadeiro ou falso)
* And (e): **&&** tudo verdade
* Or (ou): **||** um deles é verdade
* Not (não) **!** nenhum é verdade
4. **Estruturas de controle
* **if - else**
sintaxe:
```
if (condição) {
    // Bloco de código a ser executado se a condição for verdadeira
} else {
    // Bloco de código a ser executado se a condição for falsa
}
```
exemplo:
```
int numero = 10; // Define um número
// Verifica se o número é maior que 5
if (numero > 5) {
  printf("O numero e maior que 5\n"); //se for verdadeiro
} else {
   printf("O numero nao e maior que 5\n"); //se for falso
    }
```
5. **while e do while**
sintaxe:
```
do {
    // Bloco de código a ser repetido
} while (condição);
```
exemplo:
```
// Exemplo com while
int contador = 0;
while (contador < 0) {
printf("Este bloco nunca é executado\n");}
// Exemplo com do-while
int contador = 0;
do {
 printf("Este bloco é executado pelo menos uma vez\n");
} while (contador < 0);
```
7. **for**
sintaxe:
```
for (inicialização; condição; incremento/decremento) {
    // Bloco de código a ser repetido
}
```
exemplo:
```
 int i; 
// Loop que imprime os números de 0 a 4
for (i = 0; i < 5; i++) {
    printf("%d\n", i);
}
return 0;

8.
