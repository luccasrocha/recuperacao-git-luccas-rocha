#include <stdio.h>
#include <string.h>

#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    int idade;
    float nota;
} Aluno;

void cadastrarAluno(Aluno *aluno) {
    printf("=== Cadastro de Aluno ===\n");
    printf("Nome: ");
    scanf(" %[^\n]", aluno->nome);
    printf("Idade: ");
    scanf("%d", &aluno->idade);
    printf("Nota: ");
    scanf("%f", &aluno->nota);
    printf("Aluno cadastrado com sucesso!\n");
}

void exibirAluno(const Aluno *aluno) {
    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    printf("Nota: %.2f\n", aluno->nota);
}

int main() {
    Aluno aluno;
    int opcao;

    do {
        printf("\n=== Sistema de Cadastro de Alunos ===\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Exibir aluno\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno(&aluno);
                break;
            case 2:
                exibirAluno(&aluno);
                break;
            case 3:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}