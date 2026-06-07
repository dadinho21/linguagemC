#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída
#include <string.h> // Inclui a biblioteca para manipulação de strings
#include <ctype.h> // Inclui a biblioteca para funções de caracteres (toupper, tolower)

// ========== EXERCÍCIO 1: Leia um nome e mostre-o ==========
void exercicio1_string() // Função que executa o exercício 1
{
    char nome[50]; // Declara um vetor de caracteres para armazenar um nome (máximo 49 caracteres)
    
    printf("=== Exercício 1: Ler e Mostrar Nome ===\n"); // Exibe o título do exercício
    printf("Digite um nome: "); // Solicita ao usuário que digite um nome
    scanf("%s", nome); // Lê a string digitada e armazena no vetor 'nome'
    printf("Nome digitado: %s\n", nome); // Exibe o nome que foi digitado
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 2: Leia um nome e mostre quantas letras possui ==========
void exercicio2_string() // Função que executa o exercício 2
{
    char nome[50]; // Declara um vetor de caracteres para armazenar um nome
    
    printf("=== Exercício 2: Contar Letras do Nome ===\n"); // Exibe o título do exercício
    printf("Digite um nome: "); // Solicita ao usuário que digite um nome
    scanf("%s", nome); // Lê a string digitada e armazena no vetor 'nome'
    int comprimento = strlen(nome); // Calcula o comprimento da string usando strlen()
    printf("O nome '%s' possui %d letras\n", nome, comprimento); // Exibe o nome e seu comprimento
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 3: Leia duas palavras e mostre-as juntas ==========
void exercicio3_string() // Função que executa o exercício 3
{
    char palavra1[50]; // Declara um vetor de caracteres para a primeira palavra
    char palavra2[50]; // Declara um vetor de caracteres para a segunda palavra
    
    printf("=== Exercício 3: Juntar Duas Palavras ===\n"); // Exibe o título do exercício
    printf("Digite a primeira palavra: "); // Solicita a primeira palavra
    scanf("%s", palavra1); // Lê a primeira palavra
    printf("Digite a segunda palavra: "); // Solicita a segunda palavra
    scanf("%s", palavra2); // Lê a segunda palavra
    printf("Palavras juntas: %s%s\n", palavra1, palavra2); // Exibe as duas palavras concatenadas
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 4: Leia um nome e mostre letra por letra ==========
void exercicio4_string() // Função que executa o exercício 4
{
    char nome[50]; // Declara um vetor de caracteres para armazenar um nome
    
    printf("=== Exercício 4: Mostrar Letra por Letra ===\n"); // Exibe o título do exercício
    printf("Digite um nome: "); // Solicita ao usuário que digite um nome
    scanf("%s", nome); // Lê a string digitada
    printf("Letras do nome '%s':\n", nome); // Exibe o nome que será decomposto
    
    for (int i = 0; nome[i] != '\0'; i++) // Loop que percorre cada caractere até o final da string
    {
        printf("%c\n", nome[i]); // Exibe cada caractere em uma linha separada
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 5: Conte quantas vogais existem na palavra ==========
void exercicio5_string() // Função que executa o exercício 5
{
    char palavra[50]; // Declara um vetor de caracteres para armazenar uma palavra
    int contador_vogais = 0; // Variável para contar as vogais encontradas
    
    printf("=== Exercício 5: Contar Vogais ===\n"); // Exibe o título do exercício
    printf("Digite uma palavra: "); // Solicita ao usuário que digite uma palavra
    scanf("%s", palavra); // Lê a palavra digitada
    
    for (int i = 0; palavra[i] != '\0'; i++) // Loop que percorre cada caractere da palavra
    {
        char letra = tolower(palavra[i]); // Converte o caractere para minúscula para facilitar a comparação
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') // Verifica se é uma vogal
        {
            contador_vogais++; // Incrementa o contador de vogais
        }
    }
    
    printf("A palavra '%s' possui %d vogais\n", palavra, contador_vogais); // Exibe a quantidade de vogais
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 6: Transforme todas as letras em maiúsculas ==========
void exercicio6_string() // Função que executa o exercício 6
{
    char palavra[50]; // Declara um vetor de caracteres para armazenar uma palavra
    
    printf("=== Exercício 6: Converter para Maiúsculas ===\n"); // Exibe o título do exercício
    printf("Digite uma palavra: "); // Solicita ao usuário que digite uma palavra
    scanf("%s", palavra); // Lê a palavra digitada
    printf("Original: %s\n", palavra); // Exibe a palavra original
    printf("Maiúsculas: "); // Indica que a próxima exibição será em maiúsculas
    
    for (int i = 0; palavra[i] != '\0'; i++) // Loop que percorre cada caractere da palavra
    {
        printf("%c", toupper(palavra[i])); // Converte e exibe cada caractere em maiúscula
    }
    
    printf("\n\n"); // Duas quebras de linha para melhor formatação
}

// ========== EXERCÍCIO 7: Transforme todas as letras em minúsculas ==========
void exercicio7_string() // Função que executa o exercício 7
{
    char palavra[50]; // Declara um vetor de caracteres para armazenar uma palavra
    
    printf("=== Exercício 7: Converter para Minúsculas ===\n"); // Exibe o título do exercício
    printf("Digite uma palavra: "); // Solicita ao usuário que digite uma palavra
    scanf("%s", palavra); // Lê a palavra digitada
    printf("Original: %s\n", palavra); // Exibe a palavra original
    printf("Minúsculas: "); // Indica que a próxima exibição será em minúsculas
    
    for (int i = 0; palavra[i] != '\0'; i++) // Loop que percorre cada caractere da palavra
    {
        printf("%c", tolower(palavra[i])); // Converte e exibe cada caractere em minúscula
    }
    
    printf("\n\n"); // Duas quebras de linha para melhor formatação
}

// ========== EXERCÍCIO 8: Verifique se duas palavras são iguais ==========
void exercicio8_string() // Função que executa o exercício 8
{
    char palavra1[50]; // Declara um vetor de caracteres para a primeira palavra
    char palavra2[50]; // Declara um vetor de caracteres para a segunda palavra
    
    printf("=== Exercício 8: Comparar Duas Palavras ===\n"); // Exibe o título do exercício
    printf("Digite a primeira palavra: "); // Solicita a primeira palavra
    scanf("%s", palavra1); // Lê a primeira palavra
    printf("Digite a segunda palavra: "); // Solicita a segunda palavra
    scanf("%s", palavra2); // Lê a segunda palavra
    
    if (strcmp(palavra1, palavra2) == 0) // Compara as duas palavras usando strcmp() (retorna 0 se forem iguais)
    {
        printf("As palavras SÃO IGUAIS\n"); // Exibe que as palavras são iguais
    }
    else // Se strcmp() retorna algo diferente de 0
    {
        printf("As palavras SÃO DIFERENTES\n"); // Exibe que as palavras são diferentes
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 9: Leia uma frase e conte os espaços ==========
void exercicio9_string() // Função que executa o exercício 9
{
    char frase[100]; // Declara um vetor de caracteres para armazenar uma frase
    int contador_espacos = 0; // Variável para contar os espaços encontrados
    
    printf("=== Exercício 9: Contar Espaços ===\n"); // Exibe o título do exercício
    printf("Digite uma frase: "); // Solicita ao usuário que digite uma frase
    fgets(frase, sizeof(frase), stdin); // Usa fgets() para ler a frase completa (incluindo espaços)
    
    for (int i = 0; frase[i] != '\0'; i++) // Loop que percorre cada caractere da frase
    {
        if (frase[i] == ' ') // Verifica se o caractere é um espaço
        {
            contador_espacos++; // Incrementa o contador de espaços
        }
    }
    
    printf("A frase possui %d espaços\n", contador_espacos); // Exibe a quantidade de espaços
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 10: Verifique se uma palavra é um palíndromo ==========
void exercicio10_string() // Função que executa o exercício 10
{
    char palavra[50]; // Declara um vetor de caracteres para armazenar uma palavra
    int comprimento; // Variável para armazenar o comprimento da palavra
    int eh_palindromo = 1; // Flag para indicar se é um palíndromo (1 = sim, 0 = não)
    
    printf("=== Exercício 10: Verificar Palíndromo ===\n"); // Exibe o título do exercício
    printf("Digite uma palavra: "); // Solicita ao usuário que digite uma palavra
    scanf("%s", palavra); // Lê a palavra digitada
    
    comprimento = strlen(palavra); // Calcula o comprimento da palavra
    
    for (int i = 0; i < comprimento / 2; i++) // Loop que compara caracteres do início com o fim
    {
        if (palavra[i] != palavra[comprimento - 1 - i]) // Verifica se o caractere do início é diferente do fim
        {
            eh_palindromo = 0; // Marca como não-palíndromo
            break; // Sai do loop (não precisa verificar mais)
        }
    }
    
    if (eh_palindromo) // Se ainda é considerado palíndromo
    {
        printf("'%s' É UM PALÍNDROMO\n", palavra); // Exibe que é um palíndromo
    }
    else // Se não é palíndromo
    {
        printf("'%s' NÃO É UM PALÍNDROMO\n", palavra); // Exibe que não é um palíndromo
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== FUNÇÃO PRINCIPAL ==========
int main() // Função principal do programa
{
    printf("======== EXERCÍCIOS DE STRINGS ========\n\n"); // Exibe o título principal
    
    // NOTA: O exercício 9 usa fgets() que lê do buffer do stdin
    // Limpamos o buffer antes de chamar o exercício 9
    
    exercicio1_string(); // Chama a função do exercício 1
    getchar(); // Limpa o buffer de entrada
    
    exercicio2_string(); // Chama a função do exercício 2
    getchar(); // Limpa o buffer de entrada
    
    exercicio3_string(); // Chama a função do exercício 3
    getchar(); // Limpa o buffer de entrada
    
    exercicio4_string(); // Chama a função do exercício 4
    getchar(); // Limpa o buffer de entrada
    
    exercicio5_string(); // Chama a função do exercício 5
    getchar(); // Limpa o buffer de entrada
    
    exercicio6_string(); // Chama a função do exercício 6
    getchar(); // Limpa o buffer de entrada
    
    exercicio7_string(); // Chama a função do exercício 7
    getchar(); // Limpa o buffer de entrada
    
    exercicio8_string(); // Chama a função do exercício 8
    getchar(); // Limpa o buffer de entrada
    
    exercicio9_string(); // Chama a função do exercício 9
    
    exercicio10_string(); // Chama a função do exercício 10
    
    printf("======== FIM DOS EXERCÍCIOS ========\n"); // Exibe a mensagem de fim
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
