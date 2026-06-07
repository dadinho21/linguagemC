#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

// ========== FUNÇÃO PARA CALCULAR A MÉDIA ==========
float calcular_media(float nota1, float nota2, float nota3) // Função que recebe 3 notas e retorna a média
{
    return (nota1 + nota2 + nota3) / 3; // Calcula e retorna a média das três notas
}

// ========== FUNÇÃO PRINCIPAL ==========
int main() // Função principal do programa
{
    char nomes[5][50]; // Matriz de strings para armazenar até 5 nomes de até 49 caracteres
    float notas[5][3]; // Matriz para armazenar 5 alunos com 3 notas cada
    float medias[5]; // Vetor para armazenar as médias dos 5 alunos
    
    printf("======== DESAFIO FINAL ========\n"); // Exibe o título do desafio
    printf("Digite os dados de 5 alunos\n\n"); // Instrui o usuário
    
    // ========== LEITURA DOS DADOS ==========
    for (int i = 0; i < 5; i++) // Loop para ler dados dos 5 alunos
    {
        printf("Aluno %d:\n", i + 1); // Exibe o número do aluno (1 ao 5)
        
        printf("  Nome: "); // Solicita o nome do aluno
        scanf("%s", nomes[i]); // Lê o nome e armazena na matriz de nomes
        
        printf("  Nota 1: "); // Solicita a primeira nota
        scanf("%f", &notas[i][0]); // Lê a primeira nota e armazena
        
        printf("  Nota 2: "); // Solicita a segunda nota
        scanf("%f", &notas[i][1]); // Lê a segunda nota e armazena
        
        printf("  Nota 3: "); // Solicita a terceira nota
        scanf("%f", &notas[i][2]); // Lê a terceira nota e armazena
        
        printf("\n"); // Quebra de linha para melhor formatação
    }
    
    // ========== CÁLCULO DAS MÉDIAS ==========
    printf("\n=== RESULTADO FINAL ===\n\n"); // Exibe o título da seção de resultados
    
    for (int i = 0; i < 5; i++) // Loop para processar cada aluno
    {
        medias[i] = calcular_media(notas[i][0], notas[i][1], notas[i][2]); // Calcula a média do aluno
        
        printf("Aluno: %s\n", nomes[i]); // Exibe o nome do aluno
        printf("Notas: %.1f, %.1f, %.1f\n", notas[i][0], notas[i][1], notas[i][2]); // Exibe as três notas
        printf("Média: %.2f\n", medias[i]); // Exibe a média calculada
        
        if (medias[i] >= 7) // Verifica se a média é maior ou igual a 7
        {
            printf("Status: APROVADO ✓\n"); // Indica que o aluno foi aprovado
        }
        else // Se a média é menor que 7
        {
            printf("Status: REPROVADO ✗\n"); // Indica que o aluno foi reprovado
        }
        
        printf("\n"); // Quebra de linha para separar os alunos
    }
    
    // ========== ESTATÍSTICAS GERAIS ==========
    float media_geral = 0; // Variável para armazenar a média geral de todos os alunos
    float maior_media = medias[0]; // Inicializa com a primeira média
    float menor_media = medias[0]; // Inicializa com a primeira média
    int alunos_aprovados = 0; // Contador de alunos aprovados
    
    for (int i = 0; i < 5; i++) // Loop para calcular estatísticas
    {
        media_geral += medias[i]; // Adiciona a média do aluno à média geral
        
        if (medias[i] > maior_media) // Verifica se a média atual é a maior
        {
            maior_media = medias[i]; // Atualiza a maior média
        }
        
        if (medias[i] < menor_media) // Verifica se a média atual é a menor
        {
            menor_media = medias[i]; // Atualiza a menor média
        }
        
        if (medias[i] >= 7) // Verifica se o aluno foi aprovado
        {
            alunos_aprovados++; // Incrementa o contador de aprovados
        }
    }
    
    media_geral = media_geral / 5; // Calcula a média geral dividindo por 5
    
    printf("======== ESTATÍSTICAS ========\n"); // Exibe o título da seção de estatísticas
    printf("Média Geral da Turma: %.2f\n", media_geral); // Exibe a média geral
    printf("Maior Média: %.2f\n", maior_media); // Exibe a maior média
    printf("Menor Média: %.2f\n", menor_media); // Exibe a menor média
    printf("Alunos Aprovados: %d/5\n", alunos_aprovados); // Exibe a quantidade de aprovados
    printf("Alunos Reprovados: %d/5\n", 5 - alunos_aprovados); // Exibe a quantidade de reprovados
    
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
