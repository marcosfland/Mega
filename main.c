#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, quantidade;
    int numeros[20]; // Tamanho máximo do array é 20
    srand(time(0)); // Semente para geração de números aleatórios

    // Solicitar ao usuário a quantidade de números a serem gerados
    do {
        printf("Digite a quantidade de numeros a serem gerados (entre 6 e 20): ");
        scanf("%d", &quantidade);
        if (quantidade < 6 || quantidade > 20) {
            printf("Por favor, insira um número entre 6 e 20.\n");
        }
    } while (quantidade < 6 || quantidade > 20);

    printf("Numeros aleatorios entre 1 e 60:\n");
    for (i = 0; i < quantidade; i++) {
        int numero;
        do {
            numero = (rand() % 60) + 1;
            for (j = 0; j < i; j++) {
                if (numeros[j] == numero) {
                    numero = 0;
                    break;
                }
            }
        } while (numero == 0);
        numeros[i] = numero;
        printf("%d ", numero);
    }
    printf("\n");

    return 0;
}