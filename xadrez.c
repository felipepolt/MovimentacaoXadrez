#include <stdio.h>

int main()
{

    printf("--- Simulação do Movimento das Peças de Xadrez ---\n\n");

    // --- Movimento da Torre (usando 'for') ---
    // A Torre se move 5 casas para a direita

    printf("--- Movimento da Torre ---\n");
    printf("A Torre se move 5 casas para a direita.\n");

    int casasTorre = 5;

    for (int i = 0; i < casasTorre; i++)
    {
        printf("Direita\n");
    }

    printf("\n"); 

    // --- Movimento do Bispo (usando 'while') ---
    // O Bispo se move 5 casas na diagonal para cima e à direita

    printf("--- Movimento do Bispo ---\n");
    printf("O Bispo se move 5 casas na diagonal (Cima e Direita).\n");

    int casasBispo = 5;
    int contadorBispo = 0;

    while (contadorBispo < casasBispo)
    {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n"); 

    // --- Movimento da Rainha (usando 'do-while') ---
    // A Rainha se move 8 casas para a esquerda

    printf("--- Movimento da Rainha ---\n");
    printf("A Rainha se move 8 casas para a esquerda.\n");

    int casasRainha = 8;
    int contadorRainha = 0;

    if (casasRainha > 0)
    { // Garante que o loop 'do-while' execute pelo menos uma vez
        do
        {
            printf("Esquerda\n");
            contadorRainha++;
        } while (contadorRainha < casasRainha);
    }

    printf("\n"); 

    // --- Código para manter a janela do console aberta no Windows ---
    printf("Pressione ENTER para sair...");
    // Limpa o buffer de entrada para evitar que a janela feche imediatamente
    while (getchar() != '\n')
        ;
    getchar(); // Espera por uma nova entrada (a tecla Enter)

    return 0;
}
