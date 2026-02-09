#include <stdio.h>
#include <windows.h>

//Autor: naxt

int main() {
    //Bloco de declaração de variáveis
    int bomba_cont = 10;

    //Atribuição de dados
    printf("Você faz parte do Corpo de Bombeiros, e foi chamado para desarmar uma bomba.\n");

    //Bloco de repetição para o pavio da bomba
    do{
        //Desenho da bomba com ASCII art
        printf(" ___________________    . , ; . \n");
        printf("(___________________|~~~~~~~~~~~~X.;' . \n");
        printf("                      ' \" ' `   \n");
        printf("            %d...                 \n",bomba_cont);
        
        bomba_cont--; 
        Sleep(700); 
    }while (bomba_cont > 4);

    //Bloco de interação
    printf(" ___________________    . , ; . \n");
    printf("(___________________|~~~~~ ~X.;' . \n");
    printf("                      ' \" ' `   \n");
    printf("            !!!                 \n");

    printf("UFA! Você conseguiu desarmar, que sorte!!\n");
    Sleep(3000); //Pausa dramática de 3 segundos para o jogador relaxar

    //Bloco de finalização
    printf("Espera... ");
    Sleep(500);
    printf("NÃAAAOOOOO!!!!!!\n");
    
    //Bomba reativada
    printf(" ___________________    . , ; . \n");
    printf("(___________________|~~~X.;' . \n");
    printf("                      ' \" ' `   \n");
    printf("            TNT                 \n");

    //Desenho da Explosão
    printf("\n");
    printf("     _.-^^---....,,--       \n");
    printf(" _--                  --_   \n");
    printf("<                        >) \n");
    printf("|                         | \n");
    printf(" \\._                   _./  \n");
    printf("    ```--. . , ; .--'''     \n");
    printf("          | |   |           \n");
    printf("       .-=||  | |=-.        \n");
    printf("       `-=#$%%&%%$#=-'       \n"); 
    printf("          | ;  :|           \n");
    printf(" _____.,-#%%&$@%%#&#~,._____\n"); 

    Sleep(2000);
    printf("\n");
    printf("     VOCE FALHOU...         \n");

    return 0;

}
