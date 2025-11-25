#include <stdio.h>
#include <string.h> 
//Autor: Natanael dos Santos Borges

int main(){
    //Bloco de declaração de variáveis
    //A palavra é fixa: CARTAS (6 letras)
    char palavra_secreta[] = "CARTAS"; 
    char palavra_tela[] = "______"; 
    char letra;
    int erros = 0;
    int i;
    int acertou;

    printf("--- O CORINGA PEGOU O GORDON! ---\n");

    //Bloco de repetição (do-while)
    do {
        //Bloco de Desenho Simples
        printf("\nEstado da Forca (%d erros):\n", erros);
        if(erros == 0) printf("  |--\n");
        if(erros == 1) printf("  |-- O \n");
        if(erros == 2) printf("  |-- O- \n");
        if(erros == 3) printf("  |-- -O- \n");
        if(erros == 4) printf("  |-- -O-< \n"); //Boneco quase completo

        printf("Palavra: %s\n", palavra_tela);

        //Verificação de Vitória (antes de pedir nova letra)
        //Se a palavra da tela for igual a secreta (strcmp == 0)
        if(strcmp(palavra_tela, palavra_secreta) == 0){
            printf("\nVOCE VENCEU! O Batman salvou o dia.\n");
            break;
        }

        //Verificação de Derrota
        if(erros == 5){
            printf("\nVOCE PERDEU! A palavra era CARTAS.\n");
            break;
        }

        //Atribuição de dados
        printf("Digite uma letra MAIUSCULA: ");
        scanf(" %c", &letra); //O espaço antes do %c limpa o buffer

        //Bloco de verificação da letra
        acertou = 0;
        for(i = 0; i < 6; i++){
            if(palavra_secreta[i] == letra){
                palavra_tela[i] = letra;
                acertou = 1;
            }
        }

        if(acertou == 0){
            erros++;
            printf("-> Letra errada!\n");
        }

    } while(erros < 5);

    return 0;
}