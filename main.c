#include <stdio.h>

int main() {

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
                printf("\nRegistrar ocorrencia\n");
                break;

            case 2:
                printf("\nListar ocorrencias\n");
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

    } while(opcao != 0);

    return 0;
}

void registrarOcorrencia() {
	// Implementar a lógica para registrar uma ocorrência
	printf("\nRegistrar ocorrencia\n");
}