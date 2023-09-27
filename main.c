#include <stdio.h>

// Função que verifica se é primo ou não
int Primo(int num) {
    if (num <= 1) {
        return 0; // quando menor ou igual a 1, não é primo
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // não é primo
        }
    }
    return 1; //O numero é primo
}

int main() {
    int numero, encontrado = 0;

    // Pede para que digite um numero maior que 2 
    printf("Digite um numero maior que 2: ");
    scanf("%d", &numero);

    // verifica se é um numero maior que 2 
    if (numero <= 2) {
        printf("O numero deve ser maior do que 2.\n");
        return 1;
    }

    // Faz a decomposição do numero
    for (int i = 2; i <= numero / 2; i++) {
        if (Primo(i) && Primo(numero - i)) {
            printf("%d + %d = %d\n", i, numero - i, numero);
            encontrado = 1;
            break;
        }
    }


    //caso não for encontrado roda esse bloco de codigo
    if (!encontrado) {
        printf("Nao foi possivel encontrar uma decomposicao em dois numeros primos.\n");
    }

    return 0;
}