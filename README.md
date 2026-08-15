# Sistema de Cadastro de Alunos

**Nome do aluno:** Luccas Rocha  
**Nome da disciplina:** Programação de Computadores  

## Objetivo do projeto
Este projeto implementa um sistema simples de cadastro de alunos em linguagem C, permitindo cadastrar nome, idade e nota de um aluno, bem como exibir as informações cadastradas.

## Linguagem utilizada
C

## Descrição breve do programa
O programa apresenta um menu interativo no console com as seguintes opções:
1. **Cadastrar aluno** - Permite inserir nome, idade e nota do aluno
2. **Exibir aluno** - Mostra os dados do aluno cadastrado
3. **Sair** - Encerra o programa

Os dados são armazenados em memória utilizando uma estrutura `struct` durante a execução do programa.

## Como executar o programa

### Compilação
```bash
gcc main.c -o cadastro_aluno
```

### Execução
```bash
./cadastro_aluno
```

### Exemplo de uso
```
=== Sistema de Cadastro de Alunos ===
1. Cadastrar aluno
2. Exibir aluno
3. Sair
Escolha uma opcao: 1
=== Cadastro de Aluno ===
Nome: Joao Silva
Idade: 20
Nota: 8.5
Aluno cadastrado com sucesso!
```