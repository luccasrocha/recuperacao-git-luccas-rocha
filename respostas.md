# Respostas Teóricas - Trabalho de Recuperação

## 1. O que é um repositório?
Um repositório é um armazenamento onde o Git guarda todo o histórico de alterações de um projeto, incluindo arquivos, pastas, commits, branches e tags. Ele funciona como um banco de dados versionado que permite rastrear a evolução do código ao longo do tempo e colaborar com outras pessoas.

## 2. Qual a diferença entre Git e GitHub?
Git é um sistema de controle de versão distribuído instalado localmente que gerencia o histórico de mudanças no código. GitHub é uma plataforma de hospedagem na nuvem que armazena repositórios Git remotos e adiciona recursos de colaboração como Pull Requests, Issues, Actions e revisão de código.

## 3. Para que serve um commit?
Um commit registra um snapshot do estado atual dos arquivos no repositório, criando um ponto no histórico com uma mensagem descritiva. Ele serve para documentar alterações, permitir voltar a versões anteriores e facilitar a colaboração ao tornar o progresso rastreável e compreensível.

## 4. Por que utilizamos branches?
Branches permitem desenvolver funcionalidades, correções ou experimentos de forma isolada da linha principal (main), sem afetar o código estável. Isso possibilita trabalho paralelo, revisão de código via Pull Requests e integração controlada apenas quando a funcionalidade está pronta e testada.

## 5. Qual a finalidade de um Pull Request?
Um Pull Request (PR) é uma solicitação para mesclar alterações de uma branch para outra, servindo como espaço para revisão de código, discussão, execução de testes automatizados e aprovação antes da integração. Ele garante qualidade e compartilhamento de conhecimento na equipe.

## 6. Qual a diferença entre fazer um commit e fazer um push?
Commit salva as alterações localmente no repositório da sua máquina, criando um ponto no histórico. Push envia os commits locais para o repositório remoto (ex.: GitHub), tornando-os disponíveis para outros colaboradores e sincronizando o estado entre máquinas.

## 7. O que acontece quando um Pull Request é realizado?
Ao abrir um PR, as diferenças entre a branch de origem e a de destino são exibidas. A equipe pode revisar o código, sugerir alterações, rodar pipelines de CI/CD e aprovar. Após aprovação, o merge integra as mudanças na branch de destino, e a branch de origem pode ser excluída.

## 8. Qual a finalidade do merge?
O merge combina o histórico de duas branches, integrando as alterações de uma na outra. Ele une linhas de desenvolvimento paralelas, preservando o histórico de commits (merge commit) ou reaplicando-os linearmente (rebase/squash), resultando em uma base de código unificada.

## 9. Por que não é recomendado realizar todo o desenvolvimento diretamente na main?
Desenvolver direto na main impede revisão de código, quebra a proteção da branch estável, dificulta isolamento de funcionalidades, aumenta risco de conflitos e bugs em produção, e remove a rastreabilidade de quem fez o quê e por quê. Branches e PRs garantem qualidade, colaboração e deploy seguro.