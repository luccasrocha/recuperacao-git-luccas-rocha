#include <stdio.h>
#include <string.h>

#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    int idade;
    float nota;
} Aluno;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int lerInteiro(const char *mensagem, int min, int max) {
    int valor;
    while (1) {
        printf("%s", mensagem);
        if (scanf("%d", &valor) == 1 && valor >= min && valor <= max) {
            limparBuffer();
            return valor;
        }
        limparBuffer();
        printf("Valor invalido! Digite um numero entre %d e %d.\n", min, max);
    }
}

float lerFloat(const char *mensagem, float min, float max) {
    float valor;
    while (1) {
        printf("%s", mensagem);
        if (scanf("%f", &valor) == 1 && valor >= min && valor <= max) {
            limparBuffer();
            return valor;
        }
        limparBuffer();
        printf("Valor invalido! Digite um numero entre %.1f e %.1f.\n", min, max);
    }
}

void lerString(const char *mensagem, char *buffer, int tamanho) {
    while (1) {
        printf("%s", mensagem);
        if (fgets(buffer, tamanho, stdin) != NULL) {
            buffer[strcspn(buffer, "\n")] = '\0';
            if (strlen(buffer) > 0) {
                return;
            }
        }
        printf("Nome nao pode ser vazio!\n");
    }
}

void cadastrarAluno(Aluno *aluno) {
    printf("\n=== Cadastro de Aluno ===\n");
    lerString("Nome: ", aluno->nome, MAX_NOME);
    aluno->idade = lerInteiro("Idade: ", 1, 120);
    aluno->nota = lerFloat("Nota: ", 0.0, 10.0);
    printf("\nAluno cadastrado com sucesso!\n");
}

void exibirAluno(const Aluno *aluno) {
    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    printf("Nota: %.2f\n", aluno->nota);
}

int main() {
    Aluno aluno = {0};
    int opcao;
    int alunoCadastrado = 0;

    do {
        printf("\n=== Sistema de Cadastro de Alunos ===\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Exibir aluno\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            limparBuffer();
            printf("Opcao invalida!\n");
            continue;
        }
        limparBuffer();

        switch (opcao) {
            case 1:
                cadastrarAluno(&aluno);
                alunoCadastrado = 1;
                break;
            case 2:
                if (alunoCadastrado) {
                    exibirAluno(&aluno);
                } else {
                    printf("\nNenhum aluno cadastrado ainda!\n");
                }
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