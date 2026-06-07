#include <stdio.h>

int main ()

{
 int numero [5] = {10, 20, 30, 40, 50};

 printf ("O primeiro numero do vetor e: %d\n", numero [0]);


}

// Crie um vetor com 5 números e mostre todos.
{

int numero [5] = {10, 20, 30, 40, 50};

 printf ("O segundo numero do vetor e: %d\n", numero [0]); 
 printf ("O segundo numero do vetor e: %d\n", numero [1]);
 printf ("O segundo numero do vetor e: %d\n", numero [2]);
 printf ("O segundo numero do vetor e: %d\n", numero [3]);
 printf ("O segundo numero do vetor e: %d\n", numero [4]);


}

// Leia 5 números digitados pelo usuário e armazene no vetor.

{
    int numero [5];

    printf ("Digite 5 numeros: \n"); // Solicita ao usuário que digite 5 números
    for (int i = 0; i < 5; i++) { // Loop para ler os números digitados pelo usuário
        if (scanf ("%d", &numero [i]) != 1) { // Verifica se a leitura foi bem-sucedida
            printf ("Erro ao ler o número %d\n", i + 1);
            return 1;
        }
    }

    printf ("Os numeros digitados foram: \n"); // Exibe os números digitados pelo usuário
    for (int i = 0; i < 5; i++) { // Loop para imprimir os números armazenados no vetor
        printf ("%d\n", numero [i]);
    }

    printf("Fim do programa.\n"); // Indica o fim do programa
    return 0;

}

// 3 Mostre apenas o primeiro número.

{

    int numero [5] = {10, 20, 30, 40, 50};

    printf ("Mostrando apenas o primeiro numero do vetor: %d\n", numero [0]); // Exibe o primeiro número do vetor



}
// 4 Mostre apenas o último número.

{

    int numero [5] = {10, 20, 30, 40, 50};

    printf ("Mostrando apenas o último numero do vetor: %d\n", numero [4]); // Exibe o último número do vetor



}

// Some Todos os elementos do vetor

{
    int numero [5] = {10 ,20 ,30 ,40, 50};
    int soma = 0; // Variável para armazenar a soma dos elementos do vetor

    for (int i = 0; i < 5; i++) { // Loop para percorrer os elementos do vetor
        soma += numero [i]; // Adiciona o valor do elemento atual à soma
    }
    printf ("A soma de todos os elementos do vetor e: %d\n", soma); // Exibe a soma dos elementos do vetor
}

// Encontre o maior numero.
{
 int numero [5] = {10, 20, 30, 40, 50};
 int maior = numero [0]; // Inicializa a variável 'maior' com o primeiro elemento do vetor

    for (int i = 1; i < 5; i++) { // Loop para percorrer os elementos do vetor
        if (numero [i] > maior) { // Verifica se o elemento atual é maior que 'maior'
            maior = numero [i]; // Atualiza a variável 'maior' com o valor do elemento atual
        }
    }
    printf ("O maior numero do vetor e: %d\n", maior); // Exibe o maior número do vetor

}

// Encontre o menor numero.
{
 int numero [5] = {10, 20, 30, 40, 50};
 int menor = numero [0]; // Inicializa a variável 'menor' com o primeiro elemento do vetor

    for (int i = 1; i < 5; i++) { // Loop para percorrer os elementos do vetor
        if (numero [i] < menor) { // Verifica se o elemento atual é menor que 'menor'
            menor = numero [i]; // Atualiza a variável 'menor' com o valor do elemento atual
        }
    }
    printf ("O menor numero do vetor e: %d\n", menor); // Exibe o menor número do vetor

}

//Conte quantos números são pares.
{
    int numero [5] = {10, 20, 30, 40, 50};
    int pares = 0; // Variável para contar o número de elementos pares no vetor

    for (int i = 0; i < 5; i++) { // Loop para percorrer os elementos do vetor
        if (numero [i] % 2 == 0) { // Verifica se o elemento atual é par
            pares++; // Incrementa a contagem de números pares
        }
    }
    printf ("O número de elementos pares no vetor e: %d\n", pares); // Exibe a contagem de números pares
}

//Leia 10 números e mostre-os na ordem inversa.
{
    int numero [10]; // Declaração de um vetor para armazenar 10 números

    printf ("Digite 10 numeros: \n"); // Solicita ao usuário que digite 10 números
    for (int i = 0; i < 10; i++) { // Loop para ler os números digitados pelo usuário
        if (scanf ("%d", &numero [i]) != 1) { // Verifica se a leitura foi bem-sucedida
            printf ("Erro ao ler o número %d\n", i + 1);
            return 1;
        }
    }

    printf ("Os numeros digitados na ordem inversa sao: \n"); // Exibe os números na ordem inversa
    for (int i = 9; i >= 0; i--) { // Loop para imprimir os números em ordem inversa
        printf ("%d\n", numero [i]);
    }

    printf("Fim do programa.\n"); // Indica o fim do programa
    return 0;

}

//calcule a media do comandos dos vetores
{
    int numero [5] = {10, 20, 30, 40, 50};
    int soma = 0; // Variável para armazenar a soma dos elementos do vetor
    float media; // Variável para armazenar a média dos elementos do vetor

    for (int i = 0; i < 5; i++) { // Loop para percorrer os elementos do vetor
        soma += numero [i]; // Adiciona o valor do elemento atual à soma
    }
    media = (float) soma / 5; // Calcula a média dividindo a soma pelo número de elementos
    printf ("A media dos numeros do vetor e: %.2f\n", media); // Exibe a média dos números do vetor com duas casas decimais
}

{
 numero [5] = {10, 20, 30, 40, 50};
 maior = numero [0];

    for (int i = 1; i < 5; i++);

}
