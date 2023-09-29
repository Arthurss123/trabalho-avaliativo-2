#include <stdio.h>

// Função que verifica se é primo ou não
int numPrimo(int numTeste) {
    if (numTeste <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= numTeste; i++) {
        if (numTeste % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num, encontrado = 0;

    // Pede para que digite um numero maior que 2 
    printf("Digite um numero maior que 2");
    scanf("%d", &num);

    // verifica se é um numero maior que 2 
    if (num <= 2) {
        printf("O numero selecionado deve ser maior que 2\n");
        return 1;
    }

    // Faz a decomposição do numero
    for (int i = 2; i <= num / 2; i++) {
        if (Primo(i) && Primo(num - i)) {
            printf("%d + %d = %d\n", i, num - i, num);
            encontrado = 1;
            break;
        }
    }
    

    return 0;
}