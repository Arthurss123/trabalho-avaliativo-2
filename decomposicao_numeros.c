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
    int num, combiValida = 0;

    // Pede para que digite um numero maior que 2 
    printf("Digite um numero maior que 2:");
    scanf("%d", &num);

    // verifica se é um numero maior que 2 
    if (num <= 2) {
        printf("O numero selecionado deve ser maior que 2\n");
        return 1;
    }

    // Faz a decomposição do numero
    for (int i = 2; i <= num / 2; i++)/*Loop que começa com i igual a 2 e continua até "i" ser menor ou igual a metade da variavel "num" */{
        if (Primo(i) && Primo(num - i)) {
            printf("%d + %d = %d\n", i, num - i, num);
            combiValida = 1; // quando se encontra uma combinação valida de numeros primos
            break;
        }
    }
    

    return 0;
}