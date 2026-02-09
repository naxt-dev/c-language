#include <stdio.h>
#include <string.h>

//Autor: naxt

int main(){

    //Bloco de declaração de variáveis
    int escolha;
    char nome_usuario[150];
    int senha;
    int autorizacao_alto_nivel;
    int horario_comercial;
    int em_manutencao;

    //Bloco de repetição (Etapa 1: do-while)
    do {
        //Atribuição de dados (Menu Principal)
        printf("\n--- === SISTEMA DE LOGIN === ---\n");
        printf("Deseja tentar o acesso? (1 para Sim, 2 para Sair): ");
        scanf("%d", &escolha);

        if (escolha == 2) {
            printf("\nVocê decidiu sair. Até a próxima!\n");
            break; 
        } 
        else if (escolha == 1) {
            //Atribuição de dados (Etapa 2: Credenciais)
            printf("\n--- Informe seus dados ---\n");
            printf("Nome de usuário: ");
            scanf("%s", nome_usuario);

            printf("Senha (numérica): ");
            scanf("%d", &senha);

            //Bloco de verificação (Etapa 2: && - E Lógico)
            if (strcmp(nome_usuario, "admin") == 0 && senha == 1234){
                
                //Atribuição de dados (Etapa 3: Regras de Acesso)
                printf("\n--- Verificação de Segurança ---\n");
                printf("Possui Autorização de Alto Nível? (1-Sim, 0-Não): ");
                scanf("%d", &autorizacao_alto_nivel);

                printf("Estamos em Horário Comercial? (1-Sim, 0-Não): ");
                scanf("%d", &horario_comercial);

                //Bloco de verificação (Etapa 3: || - OU Lógico)
                if (autorizacao_alto_nivel == 1 || horario_comercial == 1){
                    
                    //Atribuição de dados (Etapa 4: Manutenção)
                    printf("\n--- Status do Servidor ---\n");
                    printf("O sistema está em manutenção? (1-Sim, 0-Não): ");
                    scanf("%d", &em_manutencao);

                    //Bloco de verificação (Etapa 4: ! - NÃO Lógico)
                    //O acesso só ocorre se NÃO estiver em manutenção (!em_manutencao)
                    if (!em_manutencao){
                        printf("\n=== ACESSO TOTALMENTE LIBERADO! ===\n");
                        printf("Bem-vindo ao sistema.\n");
                        break;
                    } else {
                        printf("\n[BLOQUEADO] O sistema está em manutenção no momento.\n");
                    }

                } else {
                    printf("\n[NEGADO] Necessário Autorização de Nível Alto OU Horário Comercial.\n");
                }

            } else {
                printf("\n[ERRO] Credenciais incorretas! Voltando ao menu...\n");
            }
        } 
        else {
            printf("\nOpção inválida, tente de novo.\n");
        }

    } while (escolha != 2);

    return 0;

}
