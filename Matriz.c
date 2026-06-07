#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

// ========== EXERCÍCIO 1: Crie uma matriz 2x2 e mostre seus valores ==========
void exercicio1_matriz() // Função que executa o exercício 1
{
    int matriz[2][2] = { // Declara uma matriz 2x2 (2 linhas e 2 colunas)
        {10, 20}, // Primeira linha: valores 10 e 20
        {30, 40}  // Segunda linha: valores 30 e 40
    };
    
    printf("=== Exercício 1: Matriz 2x2 ===\n"); // Exibe o título do exercício
    printf("Elemento [0][0]: %d\n", matriz[0][0]); // Mostra o valor da posição [0][0] = 10
    printf("Elemento [0][1]: %d\n", matriz[0][1]); // Mostra o valor da posição [0][1] = 20
    printf("Elemento [1][0]: %d\n", matriz[1][0]); // Mostra o valor da posição [1][0] = 30
    printf("Elemento [1][1]: %d\n", matriz[1][1]); // Mostra o valor da posição [1][1] = 40
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 2: Leia uma matriz 3x3 ==========
void exercicio2_matriz() // Função que executa o exercício 2
{
    int matriz[3][3]; // Declara uma matriz 3x3
    
    printf("=== Exercício 2: Ler Matriz 3x3 ===\n"); // Exibe o título do exercício
    printf("Digite os 9 elementos da matriz 3x3:\n"); // Instrui o usuário a digitar os elementos
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas da matriz
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas da matriz
        {
            printf("Elemento [%d][%d]: ", i, j); // Exibe a posição que será preenchida
            scanf("%d", &matriz[i][j]); // Lê o valor digitado e armazena na matriz
        }
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 3: Mostre todos os elementos ==========
void exercicio3_matriz() // Função que executa o exercício 3
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha: 1, 2, 3
        {4, 5, 6}, // Segunda linha: 4, 5, 6
        {7, 8, 9}  // Terceira linha: 7, 8, 9
    };
    
    printf("=== Exercício 3: Mostrar Todos os Elementos ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas
        {
            printf("%d ", matriz[i][j]); // Exibe o elemento atual
        }
        printf("\n"); // Nova linha ao terminar cada linha da matriz
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 4: Some todos os elementos ==========
void exercicio4_matriz() // Função que executa o exercício 4
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}, // Segunda linha
        {7, 8, 9}  // Terceira linha
    };
    
    int soma = 0; // Variável para armazenar a soma dos elementos
    
    printf("=== Exercício 4: Soma de Todos os Elementos ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas
        {
            soma += matriz[i][j]; // Adiciona o elemento atual à soma
        }
    }
    
    printf("Soma de todos os elementos: %d\n", soma); // Exibe a soma total
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 5: Conte quantos números são pares ==========
void exercicio5_matriz() // Função que executa o exercício 5
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}, // Segunda linha
        {7, 8, 9}  // Terceira linha
    };
    
    int contagem_pares = 0; // Variável para contar os números pares
    
    printf("=== Exercício 5: Contar Números Pares ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas
        {
            if (matriz[i][j] % 2 == 0) // Verifica se o elemento é par (resto da divisão por 2 é 0)
            {
                contagem_pares++; // Incrementa o contador de pares
            }
        }
    }
    
    printf("Quantidade de números pares: %d\n", contagem_pares); // Exibe a quantidade de pares
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 6: Encontre o maior elemento ==========
void exercicio6_matriz() // Função que executa o exercício 6
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}, // Segunda linha
        {7, 8, 9}  // Terceira linha
    };
    
    int maior = matriz[0][0]; // Inicializa 'maior' com o primeiro elemento da matriz
    
    printf("=== Exercício 6: Encontrar o Maior Elemento ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas
        {
            if (matriz[i][j] > maior) // Verifica se o elemento atual é maior que 'maior'
            {
                maior = matriz[i][j]; // Atualiza 'maior' com o novo valor maior encontrado
            }
        }
    }
    
    printf("Maior elemento: %d\n", maior); // Exibe o maior elemento encontrado
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 7: Encontre o menor elemento ==========
void exercicio7_matriz() // Função que executa o exercício 7
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}, // Segunda linha
        {7, 8, 9}  // Terceira linha
    };
    
    int menor = matriz[0][0]; // Inicializa 'menor' com o primeiro elemento da matriz
    
    printf("=== Exercício 7: Encontrar o Menor Elemento ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas
        {
            if (matriz[i][j] < menor) // Verifica se o elemento atual é menor que 'menor'
            {
                menor = matriz[i][j]; // Atualiza 'menor' com o novo valor menor encontrado
            }
        }
    }
    
    printf("Menor elemento: %d\n", menor); // Exibe o menor elemento encontrado
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 8: Mostre apenas a diagonal principal ==========
void exercicio8_matriz() // Função que executa o exercício 8
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}, // Segunda linha
        {7, 8, 9}  // Terceira linha
    };
    
    printf("=== Exercício 8: Diagonal Principal ===\n"); // Exibe o título do exercício
    printf("Diagonal principal:\n"); // Indica que será exibida a diagonal
    
    for (int i = 0; i < 3; i++) // Loop para percorrer os elementos da diagonal (onde i == j)
    {
        printf("%d\n", matriz[i][i]); // Exibe o elemento da diagonal (matriz[0][0], matriz[1][1], matriz[2][2])
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 9: Calcule a soma da diagonal principal ==========
void exercicio9_matriz() // Função que executa o exercício 9
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}, // Segunda linha
        {7, 8, 9}  // Terceira linha
    };
    
    int soma_diagonal = 0; // Variável para armazenar a soma da diagonal principal
    
    printf("=== Exercício 9: Soma da Diagonal Principal ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 3; i++) // Loop para percorrer os elementos da diagonal
    {
        soma_diagonal += matriz[i][i]; // Adiciona o elemento da diagonal à soma (1 + 5 + 9)
    }
    
    printf("Soma da diagonal principal: %d\n", soma_diagonal); // Exibe a soma da diagonal
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 10: Multiplique todos os elementos por 2 ==========
void exercicio10_matriz() // Função que executa o exercício 10
{
    int matriz[3][3] = { // Declara e inicializa uma matriz 3x3
        {1, 2, 3}, // Primeira linha
        {4, 5, 6}, // Segunda linha
        {7, 8, 9}  // Terceira linha
    };
    
    printf("=== Exercício 10: Multiplicar por 2 ===\n"); // Exibe o título do exercício
    printf("Matriz original:\n"); // Indica que será exibida a matriz original
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas
        {
            printf("%d ", matriz[i][j]); // Exibe o elemento original
        }
        printf("\n"); // Nova linha ao terminar cada linha da matriz
    }
    
    printf("\nMatriz multiplicada por 2:\n"); // Indica que será exibida a matriz multiplicada
    
    for (int i = 0; i < 3; i++) // Loop para percorrer as linhas
    {
        for (int j = 0; j < 3; j++) // Loop para percorrer as colunas
        {
            printf("%d ", matriz[i][j] * 2); // Exibe o elemento multiplicado por 2
        }
        printf("\n"); // Nova linha ao terminar cada linha da matriz
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== FUNÇÃO PRINCIPAL ==========
int main() // Função principal do programa
{
    printf("======== EXERCÍCIOS DE MATRIZES ========\n\n"); // Exibe o título principal
    
    exercicio1_matriz(); // Chama a função do exercício 1
    exercicio2_matriz(); // Chama a função do exercício 2
    exercicio3_matriz(); // Chama a função do exercício 3
    exercicio4_matriz(); // Chama a função do exercício 4
    exercicio5_matriz(); // Chama a função do exercício 5
    exercicio6_matriz(); // Chama a função do exercício 6
    exercicio7_matriz(); // Chama a função do exercício 7
    exercicio8_matriz(); // Chama a função do exercício 8
    exercicio9_matriz(); // Chama a função do exercício 9
    exercicio10_matriz(); // Chama a função do exercício 10
    
    printf("======== FIM DOS EXERCÍCIOS ========\n"); // Exibe a mensagem de fim
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
