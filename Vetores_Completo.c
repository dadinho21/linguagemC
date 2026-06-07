#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

// ========== EXERCÍCIO 1: Crie um vetor com 5 números e mostre todos ==========
void exercicio1_vetor() // Função que executa o exercício 1
{
    int numero[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um vetor com 5 números
    
    printf("=== Exercício 1: Vetor com 5 Números ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 5; i++) // Loop para percorrer os 5 elementos do vetor
    {
        printf("Elemento [%d]: %d\n", i, numero[i]); // Exibe cada elemento do vetor
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 2: Leia 5 números e armazene no vetor ==========
void exercicio2_vetor() // Função que executa o exercício 2
{
    int numero[5]; // Declara um vetor com 5 posições
    
    printf("=== Exercício 2: Ler 5 Números ===\n"); // Exibe o título do exercício
    printf("Digite 5 números:\n"); // Instrui o usuário a digitar 5 números
    
    for (int i = 0; i < 5; i++) // Loop para ler os 5 números
    {
        printf("Número %d: ", i + 1); // Exibe qual número será lido
        scanf("%d", &numero[i]); // Lê o número digitado e armazena no vetor
    }
    
    printf("\nNúmeros digitados:\n"); // Exibe a mensagem de resultado
    for (int i = 0; i < 5; i++) // Loop para mostrar os números lidos
    {
        printf("Número %d: %d\n", i + 1, numero[i]); // Exibe cada número
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 3: Mostre apenas o primeiro número ==========
void exercicio3_vetor() // Função que executa o exercício 3
{
    int numero[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um vetor
    
    printf("=== Exercício 3: Mostrar Primeiro Número ===\n"); // Exibe o título do exercício
    printf("Primeiro número do vetor: %d\n", numero[0]); // Exibe apenas o primeiro elemento [0]
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 4: Mostre apenas o último número ==========
void exercicio4_vetor() // Função que executa o exercício 4
{
    int numero[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um vetor
    
    printf("=== Exercício 4: Mostrar Último Número ===\n"); // Exibe o título do exercício
    printf("Último número do vetor: %d\n", numero[4]); // Exibe apenas o último elemento [4]
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 5: Some todos os elementos do vetor ==========
void exercicio5_vetor() // Função que executa o exercício 5
{
    int numero[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um vetor
    int soma = 0; // Variável para armazenar a soma
    
    printf("=== Exercício 5: Soma de Todos os Elementos ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 5; i++) // Loop para somar todos os elementos
    {
        soma += numero[i]; // Adiciona cada elemento à soma
    }
    
    printf("Soma de todos os elementos: %d\n", soma); // Exibe a soma total
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 6: Encontre o maior número ==========
void exercicio6_vetor() // Função que executa o exercício 6
{
    int numero[5] = {10, 50, 30, 40, 20}; // Declara e inicializa um vetor
    int maior = numero[0]; // Inicializa 'maior' com o primeiro elemento
    
    printf("=== Exercício 6: Encontrar o Maior Número ===\n"); // Exibe o título do exercício
    
    for (int i = 1; i < 5; i++) // Loop a partir do segundo elemento
    {
        if (numero[i] > maior) // Verifica se o elemento atual é maior que 'maior'
        {
            maior = numero[i]; // Atualiza 'maior' se encontrar um número maior
        }
    }
    
    printf("Maior número do vetor: %d\n", maior); // Exibe o maior número encontrado
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 7: Encontre o menor número ==========
void exercicio7_vetor() // Função que executa o exercício 7
{
    int numero[5] = {10, 50, 30, 40, 20}; // Declara e inicializa um vetor
    int menor = numero[0]; // Inicializa 'menor' com o primeiro elemento
    
    printf("=== Exercício 7: Encontrar o Menor Número ===\n"); // Exibe o título do exercício
    
    for (int i = 1; i < 5; i++) // Loop a partir do segundo elemento
    {
        if (numero[i] < menor) // Verifica se o elemento atual é menor que 'menor'
        {
            menor = numero[i]; // Atualiza 'menor' se encontrar um número menor
        }
    }
    
    printf("Menor número do vetor: %d\n", menor); // Exibe o menor número encontrado
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 8: Conte quantos números são pares ==========
void exercicio8_vetor() // Função que executa o exercício 8
{
    int numero[5] = {10, 21, 32, 45, 50}; // Declara e inicializa um vetor
    int contador_pares = 0; // Variável para contar os números pares
    
    printf("=== Exercício 8: Contar Números Pares ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 5; i++) // Loop para verificar cada elemento
    {
        if (numero[i] % 2 == 0) // Verifica se o número é par (resto da divisão por 2 é 0)
        {
            contador_pares++; // Incrementa o contador de pares
        }
    }
    
    printf("Quantidade de números pares: %d\n", contador_pares); // Exibe a quantidade de pares
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 9: Calcule a média dos elementos ==========
void exercicio9_vetor() // Função que executa o exercício 9
{
    int numero[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um vetor
    int soma = 0; // Variável para armazenar a soma
    float media; // Variável para armazenar a média
    
    printf("=== Exercício 9: Calcular Média dos Elementos ===\n"); // Exibe o título do exercício
    
    for (int i = 0; i < 5; i++) // Loop para somar todos os elementos
    {
        soma += numero[i]; // Adiciona cada elemento à soma
    }
    
    media = soma / 5.0; // Calcula a média dividindo a soma por 5
    printf("Média dos elementos: %.2f\n", media); // Exibe a média com 2 casas decimais
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 10: Inverta a ordem dos elementos ==========
void exercicio10_vetor() // Função que executa o exercício 10
{
    int numero[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um vetor
    
    printf("=== Exercício 10: Inverter Ordem dos Elementos ===\n"); // Exibe o título do exercício
    
    printf("Vetor original: "); // Exibe a mensagem de vetor original
    for (int i = 0; i < 5; i++) // Loop para mostrar o vetor original
    {
        printf("%d ", numero[i]); // Exibe cada elemento
    }
    printf("\n"); // Quebra de linha
    
    printf("Vetor invertido: "); // Exibe a mensagem de vetor invertido
    for (int i = 4; i >= 0; i--) // Loop começando do último elemento até o primeiro
    {
        printf("%d ", numero[i]); // Exibe cada elemento em ordem inversa
    }
    printf("\n\n"); // Duas quebras de linha para melhor formatação
}

// ========== FUNÇÃO PRINCIPAL ==========
int main() // Função principal do programa
{
    printf("======== EXERCÍCIOS DE VETORES ========\n\n"); // Exibe o título principal
    
    exercicio1_vetor(); // Chama a função do exercício 1
    exercicio2_vetor(); // Chama a função do exercício 2
    exercicio3_vetor(); // Chama a função do exercício 3
    exercicio4_vetor(); // Chama a função do exercício 4
    exercicio5_vetor(); // Chama a função do exercício 5
    exercicio6_vetor(); // Chama a função do exercício 6
    exercicio7_vetor(); // Chama a função do exercício 7
    exercicio8_vetor(); // Chama a função do exercício 8
    exercicio9_vetor(); // Chama a função do exercício 9
    exercicio10_vetor(); // Chama a função do exercício 10
    
    printf("======== FIM DOS EXERCÍCIOS ========\n"); // Exibe a mensagem de fim
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
