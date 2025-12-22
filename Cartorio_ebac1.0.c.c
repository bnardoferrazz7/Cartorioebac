#include <stdio.h>   // //biblioteca de comunicação com o usúario
#include <stdlib.h>  // biblioteca de alocação de espaço em memória
#include <locale.h>  // biblioteca de alocações de texto por região
#include <string.h>  // biblioteca responsável por cuidar das strings

int registro()
{
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];

    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);

    strcpy(arquivo, cpf);

    FILE *file = fopen(arquivo, "w");
    if (file == NULL)
    {
        printf("Erro ao criar o arquivo!\n");
        system("pause");
        return 0;
    }

    fprintf(file, "%s,", cpf);
    fclose(file);

    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    file = fopen(arquivo, "a");
    fprintf(file, "%s,", nome);
    fclose(file);

    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);
    file = fopen(arquivo, "a");
    fprintf(file, "%s,", sobrenome);
    fclose(file);

    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    file = fopen(arquivo, "a");
    fprintf(file, "%s", cargo);
    fclose(file);

    printf("\nRegistro realizado com sucesso!\n");
    system("pause");
    return 0;
}

int consulta()
{
    setlocale(LC_ALL, "portuguese");

    char cpf[40];
    char conteudo[200];

    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);

    FILE *file = fopen(cpf, "r");
    if (file == NULL)
    {
        printf("Arquivo não encontrado!\n");
        system("pause");
        return 0;
    }

    printf("\nInformações do usuário:\n");

    while (fgets(conteudo, 200, file) != NULL)
    {
        printf("%s", conteudo);
    }

    fclose(file);
    system("pause");
    return 0;
}

int deletar()
{
    char cpf[40];

    printf("Digite o CPF que deseja deletar: ");
    scanf("%s", cpf);

    if (remove(cpf) == 0)
    {
        printf("Registro deletado com sucesso!\n");
    }
    else
    {
        printf("Erro ao deletar. Arquivo não encontrado!\n");
    }

    system("pause");
    return 0;
}

int registrar_novo_nome()
{
    char nome[40];
    FILE *file = fopen("nomes.txt", "a");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo de nomes!\n");
        system("pause");
        return 0;
    }

    printf("Digite o novo nome: ");
    scanf("%s", nome);

    fprintf(file, "%s\n", nome);
    fclose(file);

    printf("Nome cadastrado com sucesso!\n");
    system("pause");
    return 0;
}

int registrar_novo_sobrenome()
{
    char sobrenome[40];
    FILE *file = fopen("sobrenomes.txt", "a");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo de sobrenomes!\n");
        system("pause");
        return 0;
    }

    printf("Digite o novo sobrenome: ");
    scanf("%s", sobrenome);

    fprintf(file, "%s\n", sobrenome);
    fclose(file);

    printf("Sobrenome cadastrado com sucesso!\n");
    system("pause");
    return 0;
}

int registrar_novo_cargo()
{
    char cargo[40];
    FILE *file = fopen("cargos.txt", "a");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo de cargos!\n");
        system("pause");
        return 0;
    }

    printf("Digite o novo cargo: ");
    scanf("%s", cargo);

    fprintf(file, "%s\n", cargo);
    fclose(file);

    printf("Cargo cadastrado com sucesso!\n");
    system("pause");
    return 0;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao;

    while (1)
    {
        system("cls");

        printf("### Cartório da EBAC ###\n\n");
        printf("1 - Registrar nomes\n");
        printf("2 - Consultar nomes\n");
        printf("3 - Deletar nomes\n");
        printf("4 - Registrar novo nome\n");
        printf("5 - Registrar novo sobrenome\n");
        printf("6 - Registrar novo cargo\n");
        printf("7 - Fechar sistema\n\n");
        printf("Opção: ");

        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {
              case 1: registro(); break;
              case 2: consulta(); break;
              case 3: deletar(); break;
              case 4: registrar_novo_nome(); break;
              case 5: registrar_novo_sobrenome(); break;
              case 6: registrar_novo_cargo(); break;
              case 7:
              printf("Sistema encerrado. Até logo!\n");
              return 0;
              default:
              printf("Opção inválida!\n");
              system("pause");
        }
    }
}


