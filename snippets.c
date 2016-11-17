///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Como ler e exibir uma string de um usuário:
#include<stdio.h>

int entrada[10];

int main(){
    fgets(entrada, 10 , stdlib);
    printf("%s", entrada);
    return 0;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Como ler e imprimir uma string invertida
#include<stdio.h>
#include<string.h>

int entrada[10];

int main(){
    int i, tamanho;
    fgets(entrada, 10 , stdlib);
    tamanho = strlen(entrada) - 1;
    printf("%s", entrada); // imprime a string original
    for (i=0; i<=tamanho; i++) {
        printf("%c", entrada[tamanho-i]); //imprime string invertida
    }
    return 0;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Como criar um vetor de números inteiros e preencher com os valores inseridos pelo usuário (quantidade de valores conhecidos)
#include<stdio.h>

int vetor[10];

int main(){
    int i;
    for (i=0; i<=(10-1); i++) {
        scanf("%d", &vetor[i]);
    };
    return 0;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Como fazer a soma dos numeros de entrada de um usuário quando a quantidade de valores que ele vai entrar é desconhecida
// (mas sabe que quando ele entrar com '0' voce deve parar de fazer a leitura);
#include<stdio.h>

int soma = 0;
int entrada;

int main(){
    scanf("%d", &entrada);
    while (entrada != 0) {
        soma += entrada;
        scanf("%d", &entrada);
    };
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Como criar uma função que recebe dois números e retorna a soma dos números:
#include<stdio.h>

int soma(int numero1, int numero2);

int main() {
    int recebe_soma;
    recebe_soma = soma(10,20);
    return 0;
};

int soma(int numero1, int numero2) {
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Como criar e preencher uma matriz 10x10 com zeros:
#include<stdio.h>

int matriz[10][10];

int main() {
    int i, j;
    for (i=0; i<=(10-1); i++) {
       for (j=0; j<=(10-1); j++) {
           matriz[i][j] = 0;
       }
    };
    return 0;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
