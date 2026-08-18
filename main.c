#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void espaco(void){
printf("===================================================\n");
return;
}
int main()
{
    int opcao;

    printf("iniciando o sistema de ferramentas ...\n");
    printf("\n");
    Sleep(3000);
    printf("[*] conectando o banco de dados do inventario\n");
    Sleep(1000);
    printf("[*] carregando modulo de leitura de QR code\n");
    Sleep(1000);
    printf("[*] verificando status e validade das garantias\n");
    Sleep(1000);
    printf("[*] sincronizando dados...");
    Sleep(1000);

    system("cls");

    espaco();
    printf("           sistema ferralog - INVENTARIO\n");
    espaco();

    printf("bem-vindo ao controle logistico de ferramentas\n");

    printf("selecione uma opcao no menu abaixo\n");
    printf("(1) cadastrar nova ferramenta\n");
    printf("(2) consultar ferramenta no setor\n");
    printf("(3) verificar status da ferramenta\n");
    printf("(4) sair do sistema\n");
    espaco();

    printf("digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao){

case 1:
    system("cls");
        char nome[50];
        int codigo;
        float valor;

        espaco();
        printf("         cadastro de ferramentas\n");
        espaco();

        printf("nome da ferramenta: ");
        fgets(nome, sizeof(nome), stdin);
        printf("codigo QR: ");
        scanf("%d", &codigo);
        printf("valor: R$");
        scanf("%f", &valor);

        system("cls");
        printf("<< FERRAMENTA CADASTRADA >>\n");
        printf("nome da ferramenta: %s\n", nome);
        printf("codigo QR da ferramenta: %d\n", codigo);
        printf("valor da ferramenta: %.2f\n", valor);
        break;

case 2:
    system("cls");
    espaco();
    printf("              consultar ferramenta no setor\n");
    espaco();
    break;

case 3:
    system("cls");
    espaco();
    printf("              verificar status da ferramenta\n");
    espaco();
    break;

case 4:
     printf("saindo...\n");
        Sleep(2000);
        printf("<< VOLTE SEMPRE >>\n");

default:
    printf("valor invalido\n");
    }

    return 0;
}
