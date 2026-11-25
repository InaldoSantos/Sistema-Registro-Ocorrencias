#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OCORRENCIAS 100

typedef struct Ocorrencia {
    int codigo;
    char titulo[100];
    char descricao[300];
    char local[100];
    char status[20];
} Ocorrencia;

void registrarOcorrencia(Ocorrencia **ocorrencias, int * quantidade);
void listarOcorrencias();
void consultarOcorrencia();


int main() {
    Ocorrencia *ocorrencias = NULL;
    int quantidade = 0;

    int opcao;

    do {
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

        switch(opcao) {

            case 1:
                registrarOcorrencia(&ocorrencias, &quantidade);
                break;

            case 2:
                listarOcorrencias();
                break;

            case 3:
                consultarOcorrencia();
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

    } while(opcao != 0);

    free(ocorrencias);

    return 0;
}

void registrarOcorrencia(Ocorrencia **ocorrencias, int *quantidade) {

    Ocorrencia *temporario;

    temporario = realloc(*ocorrencias, (*quantidade + 1) * sizeof(Ocorrencia));

    if (temporario == NULL) {
        printf("\nErro ao alocar memoria!\n");
        return;
    }

    *ocorrencias = temporario;

    printf("\nMemoria alocada com sucesso!\n");

    (*quantidade)++;
}

void listarOcorrencias() {
        
}