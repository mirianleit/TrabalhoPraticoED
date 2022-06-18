#include <stdio.h>
#include <stdlib.h>
#include "abb.h"
#include "fila.h"

int main()
{
    int resp = -1;
    int id = 0;
    int retorno;
    while (resp != 0)
    {

        printf("--------------------------------------\n");
        printf("    Sistema de Encomenda de Livros    \n");
        printf("--------------------------------------\n");
        printf("                                      \n");
        printf("1 - Encomendar um livro\n");
        printf("2 - Remover uma encomenda de livro\n");
        printf("3 - Remover um pedido\n");
        printf("4 - Sair\n");
        printf("                                      \n");
        printf("--------------------------------------\n");
        printf("Escolha a opcao desejada: \n");
        printf("--------------------------------------\n");
        scanf("%d", &resp);
        
       if(resp == 1){
            
                printf("Digite o nome do aluno: \n");
                char *nome = malloc(sizeof(char));
                scanf(" %[^\n]s", nome); 
                int matricula = malloc(sizeof(int));
                printf("Digite a matricula do aluno: \n");
                scanf("%d", &matricula);
                char *descricao = malloc(sizeof(char));
                printf("Insira uma descricao:\n");
                scanf(" %[^\n]s", descricao); 
                id += id; //temporario
                add_abb(id, nome, matricula, descricao);
        }
        else if(resp == 2)
        {
            //visualizar as encomendas em ordem
            printf("--------------------------------------\n");
            in_ordem(raiz);
            printf("--------------------------------------\n");
            //2 - verificar o usuario
            printf("Digite seu cpf:\n");
            char cpf[100];
            scanf("%s", &cpf);
            printf(" Digite sua senha:\n");
            char senha[100];
            scanf("%s", &senha);

            retorno = verificar(cpf, senha);
            if (retorno == 1){

            }
        }
        else if(resp == 3)
        {
         //2 - verificar o usuario
                    printf(" Digite seu cpf:\n");
                    char cpf[100];
                    scanf("%s", &cpf);
                    printf(" Digite sua senha:\n");
                    char senha[100];
                    scanf("%s", &senha);
                    //int retorno = verificar(cpf, senha);
                    if(retorno == 1){
                        //remover da fila de prioridade
                    }
        }
          
        }
    

    return 0;
    }   