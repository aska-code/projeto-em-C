#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int opcao;

    printf("conectando o banco de dados do inventario\n");
    Sleep(1000);
    printf("carregando modulo de leitura de QR code\n");
    Sleep(1000);
    printf("verificando status e validade das garantias\n");
    Sleep(1000);
    printf("sincronizando dados...");
    Sleep(1000);

    system("cls");

    printf("===================================================\n");
    printf("           sistema ferralog - INVENTARIO\n");
    printf("===================================================\n");

    printf("bem-vindo ao controle logistico de ferramentas\n");

    printf("selecione uma opcao no menu abaixo\n");
    printf("(1) cadastrar nova ferramenta\n");
    printf("(2) consultar ferramenta no setor\n");
    printf("(3) verificar status da ferramenta\n");
    printf("(4) sair do sistema\n");
    printf("===================================================\n");

    printf("digite a opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        char nome[50];

        printf("======================================\n");
        printf("      cadastro de ferramentas\n");
        printf("======================================\n");

        printf("nome da ferramenta: ");
        scanf("%s", &nome);

        printf("o nome da ferramenta e: %s\n", nome);
    }

    return 0;
}
