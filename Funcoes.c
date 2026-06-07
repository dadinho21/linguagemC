#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída
#include <string.h> // Inclui a biblioteca para manipulação de strings
#include <math.h> // Inclui a biblioteca para funções matemáticas

// ========== EXERCÍCIO 1: Função que mostre "Olá Mundo" ==========
void exercicio1_funcao() // Função que executa o exercício 1
{
    printf("Olá Mundo\n"); // Exibe a mensagem "Olá Mundo"
}

void chamar_exercicio1() // Função wrapper para chamar o exercício 1 com formatação
{
    printf("=== Exercício 1: Função que Mostre 'Olá Mundo' ===\n"); // Exibe o título do exercício
    exercicio1_funcao(); // Chama a função que exibe "Olá Mundo"
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 2: Função que some dois números ==========
int exercicio2_funcao(int a, int b) // Função que recebe dois parâmetros inteiros e retorna a soma
{
    return a + b; // Retorna a soma dos dois números
}

void chamar_exercicio2() // Função wrapper para chamar o exercício 2 com formatação
{
    printf("=== Exercício 2: Função que Some Dois Números ===\n"); // Exibe o título do exercício
    int num1 = 10; // Define o primeiro número
    int num2 = 5; // Define o segundo número
    int resultado = exercicio2_funcao(num1, num2); // Chama a função de soma
    printf("Soma de %d + %d = %d\n", num1, num2, resultado); // Exibe o resultado da soma
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 3: Função que multiplique dois números ==========
int exercicio3_funcao(int a, int b) // Função que recebe dois parâmetros inteiros e retorna o produto
{
    return a * b; // Retorna o produto dos dois números
}

void chamar_exercicio3() // Função wrapper para chamar o exercício 3 com formatação
{
    printf("=== Exercício 3: Função que Multiplique Dois Números ===\n"); // Exibe o título do exercício
    int num1 = 10; // Define o primeiro número
    int num2 = 5; // Define o segundo número
    int resultado = exercicio3_funcao(num1, num2); // Chama a função de multiplicação
    printf("Multiplicação de %d * %d = %d\n", num1, num2, resultado); // Exibe o resultado da multiplicação
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 4: Função que retorne o maior entre dois números ==========
int exercicio4_funcao(int a, int b) // Função que recebe dois parâmetros inteiros e retorna o maior
{
    if (a > b) // Verifica se o primeiro número é maior que o segundo
    {
        return a; // Retorna o primeiro número
    }
    else // Se o primeiro número não é maior
    {
        return b; // Retorna o segundo número
    }
}

void chamar_exercicio4() // Função wrapper para chamar o exercício 4 com formatação
{
    printf("=== Exercício 4: Função que Retorne o Maior Entre Dois Números ===\n"); // Exibe o título do exercício
    int num1 = 10; // Define o primeiro número
    int num2 = 20; // Define o segundo número
    int maior = exercicio4_funcao(num1, num2); // Chama a função para encontrar o maior
    printf("Entre %d e %d, o maior é: %d\n", num1, num2, maior); // Exibe o maior número
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 5: Função que calcule a média de três números ==========
float exercicio5_funcao(float a, float b, float c) // Função que recebe três números e retorna a média
{
    return (a + b + c) / 3; // Calcula e retorna a média dos três números
}

void chamar_exercicio5() // Função wrapper para chamar o exercício 5 com formatação
{
    printf("=== Exercício 5: Função que Calcule a Média de Três Números ===\n"); // Exibe o título do exercício
    float num1 = 7; // Define o primeiro número
    float num2 = 8; // Define o segundo número
    float num3 = 9; // Define o terceiro número
    float media = exercicio5_funcao(num1, num2, num3); // Chama a função de média
    printf("Média de %.1f, %.1f e %.1f = %.2f\n", num1, num2, num3, media); // Exibe a média
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 6: Função que descubra se um número é par ==========
int exercicio6_funcao(int numero) // Função que recebe um número e retorna 1 se par, 0 se ímpar
{
    if (numero % 2 == 0) // Verifica se o resto da divisão por 2 é 0 (número par)
    {
        return 1; // Retorna 1 para indicar que é par
    }
    else // Se o resto não é 0
    {
        return 0; // Retorna 0 para indicar que é ímpar
    }
}

void chamar_exercicio6() // Função wrapper para chamar o exercício 6 com formatação
{
    printf("=== Exercício 6: Função que Descubra se um Número é Par ===\n"); // Exibe o título do exercício
    int num1 = 10; // Define o primeiro número (par)
    int num2 = 7; // Define o segundo número (ímpar)
    
    if (exercicio6_funcao(num1) == 1) // Chama a função para verificar se num1 é par
    {
        printf("%d é PAR\n", num1); // Exibe que o número é par
    }
    else // Se não é par
    {
        printf("%d é ÍMPAR\n", num1); // Exibe que o número é ímpar
    }
    
    if (exercicio6_funcao(num2) == 1) // Chama a função para verificar se num2 é par
    {
        printf("%d é PAR\n", num2); // Exibe que o número é par
    }
    else // Se não é par
    {
        printf("%d é ÍMPAR\n", num2); // Exibe que o número é ímpar
    }
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 7: Função que calcule o quadrado de um número ==========
int exercicio7_funcao(int numero) // Função que recebe um número e retorna seu quadrado
{
    return numero * numero; // Retorna o número multiplicado por ele mesmo
}

void chamar_exercicio7() // Função wrapper para chamar o exercício 7 com formatação
{
    printf("=== Exercício 7: Função que Calcule o Quadrado ===\n"); // Exibe o título do exercício
    int numero = 5; // Define o número
    int quadrado = exercicio7_funcao(numero); // Chama a função para calcular o quadrado
    printf("O quadrado de %d é: %d\n", numero, quadrado); // Exibe o resultado
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 8: Função que calcule o fatorial ==========
int exercicio8_funcao(int numero) // Função que recebe um número e retorna seu fatorial
{
    int fatorial = 1; // Inicializa o fatorial com 1
    
    for (int i = 1; i <= numero; i++) // Loop de 1 até o número (5! = 1*2*3*4*5)
    {
        fatorial *= i; // Multiplica o fatorial pelo valor atual de i
    }
    
    return fatorial; // Retorna o fatorial calculado
}

void chamar_exercicio8() // Função wrapper para chamar o exercício 8 com formatação
{
    printf("=== Exercício 8: Função que Calcule o Fatorial ===\n"); // Exibe o título do exercício
    int numero = 5; // Define o número
    int resultado = exercicio8_funcao(numero); // Chama a função para calcular o fatorial
    printf("%d! = %d\n", numero, resultado); // Exibe o resultado do fatorial
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 9: Função que conte quantos caracteres uma string possui ==========
int exercicio9_funcao(char string[]) // Função que recebe uma string e retorna sua quantidade de caracteres
{
    int contador = 0; // Inicializa o contador
    
    for (int i = 0; string[i] != '\0'; i++) // Loop que percorre até o final da string
    {
        contador++; // Incrementa o contador a cada caractere
    }
    
    return contador; // Retorna a quantidade de caracteres
}

void chamar_exercicio9() // Função wrapper para chamar o exercício 9 com formatação
{
    printf("=== Exercício 9: Função que Conte Caracteres de uma String ===\n"); // Exibe o título do exercício
    char texto[] = "Programacao"; // Define a string
    int quantidade = exercicio9_funcao(texto); // Chama a função para contar caracteres
    printf("A string '%s' possui %d caracteres\n", texto, quantidade); // Exibe o resultado
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== EXERCÍCIO 10: Função que receba um vetor e retorne a soma de seus elementos ==========
int exercicio10_funcao(int vetor[], int tamanho) // Função que recebe um vetor e seu tamanho, retorna a soma
{
    int soma = 0; // Inicializa a soma com 0
    
    for (int i = 0; i < tamanho; i++) // Loop que percorre todos os elementos do vetor
    {
        soma += vetor[i]; // Adiciona o elemento atual à soma
    }
    
    return soma; // Retorna a soma de todos os elementos
}

void chamar_exercicio10() // Função wrapper para chamar o exercício 10 com formatação
{
    printf("=== Exercício 10: Função que Retorne a Soma do Vetor ===\n"); // Exibe o título do exercício
    int vetor[5] = {10, 20, 30, 40, 50}; // Define um vetor com 5 elementos
    int tamanho = 5; // Define o tamanho do vetor
    int soma = exercicio10_funcao(vetor, tamanho); // Chama a função para somar os elementos
    printf("Soma dos elementos do vetor: %d\n", soma); // Exibe a soma
    printf("\n"); // Quebra de linha para melhor formatação
}

// ========== FUNÇÃO PRINCIPAL ==========
int main() // Função principal do programa
{
    printf("======== EXERCÍCIOS DE FUNÇÕES ========\n\n"); // Exibe o título principal
    
    chamar_exercicio1(); // Chama a função wrapper do exercício 1
    chamar_exercicio2(); // Chama a função wrapper do exercício 2
    chamar_exercicio3(); // Chama a função wrapper do exercício 3
    chamar_exercicio4(); // Chama a função wrapper do exercício 4
    chamar_exercicio5(); // Chama a função wrapper do exercício 5
    chamar_exercicio6(); // Chama a função wrapper do exercício 6
    chamar_exercicio7(); // Chama a função wrapper do exercício 7
    chamar_exercicio8(); // Chama a função wrapper do exercício 8
    chamar_exercicio9(); // Chama a função wrapper do exercício 9
    chamar_exercicio10(); // Chama a função wrapper do exercício 10
    
    printf("======== FIM DOS EXERCÍCIOS ========\n"); // Exibe a mensagem de fim
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
