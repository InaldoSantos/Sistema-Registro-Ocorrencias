#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OCORRENCIAS 100

typedef struct Ocorrencia
{
    int codigo;
    char titulo[100];
    char descricao[300];
    char local[100];
    char status[20];
} Ocorrencia;

void registrarOcorrencia(Ocorrencia **ocorrencias, int *quantidade);
void listarOcorrencias(Ocorrencia *ocorrencias, int quantidade);
//void consultarOcorrencia();
//void alterarOcorrencia();
//void excluirOcorrencia();
//void alterarStatus();

int main()
{
    Ocorrencia *ocorrencias = NULL;
    int quantidade = 0;
    int opcao;

    do
    {
        printf("\n===== SISTEMA DE REGISTRO DE OCORRENCIAS =====\n");
        printf("1. Registrar ocorrencia\n");
        printf("2. Listar ocorrencias\n");
        printf("3. Consultar ocorrencia\n");
        printf("4. Alterar ocorrencia\n");
        printf("5. Excluir ocorrencia\n");
        printf("6. Alterar status da ocorrencia\n");
        printf("0. Sair\n");

        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);

        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;

        switch (opcao)
        {

        case 1:
            registrarOcorrencia(&ocorrencias, &quantidade);
            break;

        case 2:
            listarOcorrencias(ocorrencias, quantidade);
            break;

        case 3:
            printf("\nConsultar ocorrencia\n");
            break;

        case 4:
            printf("\nAlterar ocorrencia\n");
            break;

        case 5:
            printf("\nExcluir ocorrencia\n");
            break;

        case 6:
            printf("\nAlterar status da ocorrencia\n");
            break;

        case 0:
            printf("\nEncerrando o sistema...\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    free(ocorrencias);

    return 0;
}

// 1. Registrar
void registrarOcorrencia(Ocorrencia **ocorrencias, int *quantidade)
{
    if (*quantidade >= MAX_OCORRENCIAS)
    {
        printf("\nLimite maximo de ocorrencias atingido!\n");
        return;
    }
    Ocorrencia *temporario;

    temporario = realloc(*ocorrencias, (*quantidade + 1) * sizeof(Ocorrencia));

    if (temporario == NULL)
    {
        printf("\nErro ao alocar memoria!\n");
        return;
    }

    *ocorrencias = temporario;

    printf("\nMemoria alocada com sucesso!\n");

    Ocorrencia *nova = &(*ocorrencias)[*quantidade];
    nova->codigo = *quantidade + 1;

    printf("Título: ");
    fgets(nova->titulo, sizeof(nova->titulo), stdin);
    nova->titulo[strcspn(nova->titulo, "\n")] = '\0';

    printf("Descricao: ");
    fgets(nova->descricao, sizeof(nova->descricao), stdin);
    nova->descricao[strcspn(nova->descricao, "\n")] = '\0';

    printf("Local: ");
    fgets(nova->local, sizeof(nova->local), stdin);
    nova->local[strcspn(nova->local, "\n")] = '\0';

    strcpy(nova->status, "Aberta");

    (*quantidade)++;

    printf("\nOcorrencia registrada! Codigo: %d\n", nova->codigo);
}

void listarOcorrencias(Ocorrencia ocorrencias[], int quantidade) {

}