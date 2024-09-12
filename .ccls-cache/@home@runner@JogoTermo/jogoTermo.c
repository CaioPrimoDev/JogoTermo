#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para a função strlen()
#include <time.h>   // Para função sleep()
#include <ctype.h>  // Para a função toupper()
#include <malloc.h>
#include <unistd.h>


//-------------------------------||
// '1' para "EM DESENVOLVIMENTO" || 
#define DEVELOPER 1 
//   '0' para " JOGO NORMAL "    ||
//-------------------------------||

#define MAX_WORDS 5 
#define MAX_WORD_LENGTH 6  
// Incluindo o caractere nulo

#define FILE_NAME "palavras_validas.txt"

// ######################### Funções de decoração e jogabilidade #########################  //

// Todas as imagens ASCII
void imagem(int imagem){

if(imagem == 1){

    printf("\n");
    printf("     __________        \n");
    printf("   /          /|       \n");
    printf(" /__________/  |       \n");
    printf(" |________ |   |       \n");
    printf(" /_____  /||   |       \n");
    printf("|'.___.'| ||   |       \n");
    printf("|_______|/ |   |       \n");
    printf(" || .___.'||  /        \n");
    printf(" ||_______|| /         \n");
    printf(" |_________|/          \n"); 

}
if(imagem == 2){

      printf("\n");
      printf("                       .,,uod8B8bou,,.                             \n");
      printf("              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.                    \n");
      printf("         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||                   \n");
      printf("         !...:!TVBBBRPFT||||||||||!!^^""'     ||||                   \n");
      printf("         !.......:!?|||||!!^^""'              ||||                   \n");
      printf("         !.........||||                     ||||                   \n");
      printf("         !.........||||  ##                 ||||                   \n");
      printf("         !.........||||                     ||||                   \n");
      printf("         !.........||||                     ||||                   \n");
      printf("         !.........||||                     ||||                   \n");
      printf("         !.........||||                     ||||                   \n");
      printf("         `.........||||                    ,||||                   \n");
      printf("          .;.......||||               _.-!!|||||                   \n");
      printf("   .,uodWBBBBb.....||||       _.-!!|||||||||!:'                    \n");
      printf("!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....               \n");
      printf("!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.             \n");
      printf("!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.           \n");
      printf("!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^::::::       `.         \n");
      printf("!........YBBBBBBBBBBRPFT?!::::::::::^''...::::::;         iBBbo.   \n");
      printf("`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo. \n");
      printf("  `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^'\n");
      printf("    `........::::::::::::::::;iof688888888888888888888b.     `     \n");
      printf("      `......:::::::::;iof688888888888888888888888888888b.         \n");
      printf("        `....:::;iof688888888888888888888888888888888899fT!        \n");
      printf("          `..::!8888888888888888888888888888888899fT|!^:'          \n");
      printf("            `' !!988888888888888888888888899fT|!^!'                \n");
      printf("                `!!8888888888888888899fT|!^''                      \n");
      printf("                  `!988888888899fT|!^''                            \n");
      printf("                    `!9899fT|!^''                                  \n");
}
if(imagem == 3){

    printf("\033[0;32m\n");  // Cor verde para a mensagem de parabéns
    printf("╔═════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("║░░██╗░░░░░░░██╗░░░░░██╗░░░░░███╗░░██╗░░░░░███╗░░██╗░░░░░███████╗░░░░░██████╗░░░░██╗░░║\n");
    printf("║░░██║░░██╗░░██║░░░░░██║░░░░░████╗░██║░░░░░████╗░██║░░░░░██╔════╝░░░░░██╔══██╗░░░██║░░║\n");
    printf("║░░╚██╗████╗██╔╝░░░░░██║░░░░░██╔██╗██║░░░░░██╔██╗██║░░░░░█████╗░░░░░░░██████╔╝░░░██║░░║\n");
    printf("║░░░████╔═████║░░░░░░██║░░░░░██║╚████║░░░░░██║╚████║░░░░░██╔══╝░░░░░░░██╔══██╗░░░╚═╝░░║\n");
    printf("║░░░╚██╔╝░╚██╔╝░░░░░░██║░░░░░██║░╚███║░░░░░██║░╚███║░░░░░███████╗░░░░░██║░░██║░░░██╗░░║\n");
    printf("║░░░░╚═╝░░░╚═╝░░░░░░░╚═╝░░░░░╚═╝░░╚══╝░░░░░╚═╝░░╚══╝░░░░░╚══════╝░░░░░╚═╝░░╚═╝░░░╚═╝░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("╚═════════════════════════════════════════════════════════════════════════════════════╝\n\n");
    printf("    ___________\n");
    printf("   '._==_==_=_.'\n");
    printf("   .-\\:      /-.\n");
    printf("  | (|:.     |) |\n");
    printf("   '-|:.     |-'\n");
    printf("     \\::.    /\n");
    printf("      '::. .'\n");
    printf("        ) (\n");
    printf("      _.' '._\n");
    printf("     \"\"\"\"\"\"\"\n");
    printf("\033[0m");


}

}

// Tela de carregamento
void loading(){

    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("█░██░██░██░██░██░██░██░██░░░░░░░░░░░░░█\n");
    printf("█░██░██░██░██░██░██░██░██░░░░░░░░░░░░░█\n");
    printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("░░█░░░░█▀▀▀█░█▀▀█░█▀▀▄░▀█▀░█▄░░█░█▀▀█░░\n");
    printf("░░█░░░░█░░░█░█▄▄█░█░░█░░█░░█░█░█░█░▄▄░░\n");
    printf("░░█▄▄█░█▄▄▄█░█░░█░█▄▄▀░▄█▄░█░░▀█░█▄▄█░░\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");

    sleep(1);
    system("clear");

    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("█░██░██░██░██░██░██░██░██░██░░░░░░░░░░█\n");
    printf("█░██░██░██░██░██░██░██░██░██░░░░░░░░░░█\n");
    printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("░░█░░░░█▀▀▀█░█▀▀█░█▀▀▄░▀█▀░█▄░░█░█▀▀█░░\n");
    printf("░░█░░░░█░░░█░█▄▄█░█░░█░░█░░█░█░█░█░▄▄░░\n");
    printf("░░█▄▄█░█▄▄▄█░█░░█░█▄▄▀░▄█▄░█░░▀█░█▄▄█░░\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");

    sleep(1);
    system("clear");

    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("█░██░██░██░██░██░██░██░██░██░██░░░░░░░█\n");
    printf("█░██░██░██░██░██░██░██░██░██░██░░░░░░░█\n");
    printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("░░█░░░░█▀▀▀█░█▀▀█░█▀▀▄░▀█▀░█▄░░█░█▀▀█░░\n");
    printf("░░█░░░░█░░░█░█▄▄█░█░░█░░█░░█░█░█░█░▄▄░░\n");
    printf("░░█▄▄█░█▄▄▄█░█░░█░█▄▄▀░▄█▄░█░░▀█░█▄▄█░░\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");

    sleep(1);
    system("clear");

    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("█░██░██░██░██░██░██░██░██░██░██░██░░░░█\n");
    printf("█░██░██░██░██░██░██░██░██░██░██░██░░░░█\n");
    printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("░░█░░░░█▀▀▀█░█▀▀█░█▀▀▄░▀█▀░█▄░░█░█▀▀█░░\n");
    printf("░░█░░░░█░░░█░█▄▄█░█░░█░░█░░█░█░█░█░▄▄░░\n");
    printf("░░█▄▄█░█▄▄▄█░█░░█░█▄▄▀░▄█▄░█░░▀█░█▄▄█░░\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");

    sleep(1);
    system("clear");

    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n");
    printf("█░██░██░██░██░██░██░██░██░██░██░██░██░█\n");
    printf("█░██░██░██░██░██░██░██░██░██░██░██░██░█\n");
    printf("█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");
    printf("░░█░░░░█▀▀▀█░█▀▀█░█▀▀▄░▀█▀░█▄░░█░█▀▀█░░\n");
    printf("░░█░░░░█░░░█░█▄▄█░█░░█░░█░░█░█░█░█░▄▄░░\n");
    printf("░░█▄▄█░█▄▄▄█░█░░█░█▄▄▀░▄█▄░█░░▀█░█▄▄█░░\n");
    printf("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n");

    sleep(1);
    system("clear");
    printf("\n");
}

// Tela de inicio
void iniciar(){

    printf("\033[0;32m\n");
    printf("                                 ╔═══════════════════════════════════════════════════════════════════╗\n");
    printf("                                 ║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n"); 
    printf("                                 ║░░████████╗░░░░░███████╗░░░░░██████╗░░░░░░███╗░░░███╗░░░░░░█████╗░░║\n"); 
    printf("                                 ║░░╚══██╔══╝░░░░░██╔════╝░░░░░██╔══██╗░░░░░████╗░████║░░░░░██╔══██╗░║\n"); 
    printf("                                 ║░░░░░██║░░░░░░░░█████╗░░░░░░░██████╔╝░░░░░██╔████╔██║░░░░░██║░░██║░║\n");
    printf("                                 ║░░░░░██║░░░░░░░░██╔══╝░░░░░░░██╔══██╗░░░░░██║╚██╔╝██║░░░░░██║░░██║░║\n"); 
    printf("                                 ║░░░░░██║░░░░░░░░███████╗░░░░░██║░░██║░░░░░██║░╚═╝░██║░░░░░╚█████╔╝░║\n");
    printf("                                 ║░░░░░╚═╝░░░░░░░░╚══════╝░░░░░╚═╝░░╚═╝░░░░░╚═╝░░░░░╚═╝░░░░░░╚════╝░░║\n");
    printf("                                 ║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("                                 ╚═══════════════════════════════════════════════════════════════════╝\n");
    printf("\033[0m");                                            

printf("\033[0;36m");
 printf("\nJogo produzio por:");
  printf("\033[0;31m");
   printf("\n> Caio Nunes Primo");
    printf("\033[0;35m");
     printf("\n> Pedro Rocha");
      printf("\033[0;33m");
       printf("\n> Eder Joe");
        printf("\033[0;32m");
         printf("\n> João Victor");
          printf("\033[0;33m");
           printf("\n> Bruno Marques\n\n");
            printf("\033[0m");
}

// Tela de seleção de modo de jogo
int modoDeJogar() {
    int opcao;

    // Se não estiver no modo de desenvolvedor, inicia e faz uma pausa
    if (DEVELOPER != MODO_DESENVOLVEDOR) {
        iniciar();
        sleep(5);  // Pausa a execução por 5 segundos
    }

    system("clear");

    // Se não estiver no modo de desenvolvedor, exibe a imagem inicial
    if (DEVELOPER != MODO_DESENVOLVEDOR) {
        imagem(1);
    }

    // Exibindo as regras do jogo
    printf("\n\nRegras:\n");
    printf("1. Digite com o caps lock desativado.\n");
    printf("2. Cada palavra deve conter 5 letras.\n");
    printf("3. Você só terá 5 chances.\n");
    printf("4. As palavras não têm acento.\n");

    // Mensagem de início do jogo
    printf("\033[0;36m"); // Define a cor para ciano
    printf("\n\nIniciando jogo...\n");
    printf("\033[0m"); // Reseta a cor

    // Se não estiver no modo de desenvolvedor, faz uma pausa antes de limpar a tela
    if (DEVELOPER != MODO_DESENVOLVEDOR) {
        sleep(7);  // Pausa a execução por 7 segundos
    }
    system("clear");

    // Se não estiver no modo de desenvolvedor, exibe a imagem final
    if (DEVELOPER != MODO_DESENVOLVEDOR) {
        imagem(2);
    }

    // Loop para selecionar o modo de jogo
    while (1) {
        printf("\nSelecione o modo de jogo:\n");
        printf("1 - Jogo Normal\n");
        printf("2 - Modo Desenvolvedor\n");
        printf("Escolha: ");

        // Validação da entrada do usuário
        if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 2) {
            printf("\033[0;31m"); // Define a cor para vermelho
            printf("\n\nErro: Selecione uma opção válida\n");
            printf("\033[0m"); // Reseta a cor
            while (getchar() != '\n');  // Limpa o buffer de entrada
        } else {
            break;
        }
    }

    system("clear");

    // Retorna o modo de jogo selecionado
    if (opcao == 2) {
        return 20;  // Modo Desenvolvedor
    } else if (opcao == 1) {
        if (DEVELOPER != MODO_DESENVOLVEDOR) {
            loading();
        }
        return 10;  // Modo Normal
    }

    return -1; // Retorna -1 em caso de erro inesperado
}

// Tela de Fim de jogo (perdeu)
void youLoser(char output_word[MAX_WORD_LENGTH]){

  sleep(1);
  system("clear");
  printf("\033[0;31m");
  printf("\n");
  printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
  printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
  printf("║░░██╗░░░██╗░░░░░█████╗░░░░░██╗░░░██╗░░░░░░░░░░██╗░░░░░░░░░█████╗░░░░░░░██████╗░░░░███████╗░░░░██████╗░░░░██╗░░║\n");
  printf("║░░╚██╗░██╔╝░░░░██╔══██╗░░░░██║░░░██║░░░░░░░░░░██║░░░░░░░░██╔══██╗░░░░░██╔════╝░░░░██╔════╝░░░░██╔══██╗░░░██║░░║\n");
  printf("║░░░╚████╔╝░░░░░██║░░██║░░░░██║░░░██║░░░░░░░░░░██║░░░░░░░░██║░░██║░░░░░╚█████╗░░░░░█████╗░░░░░░██████╔╝░░░██║░░║\n");
  printf("║░░░░╚██╔╝░░░░░░██║░░██║░░░░██║░░░██║░░░░░░░░░░██║░░░░░░░░██║░░██║░░░░░░╚═══██╗░░░░██╔══╝░░░░░░██╔══██╗░░░╚═╝░░║\n");
  printf("║░░░░░██║░░░░░░░╚█████╔╝░░░░╚██████╔╝░░░░░░░░░░███████╗░░░╚█████╔╝░░░░░██████╔╝░░░░███████╗░░░░██║░░██║░░░██╗░░║\n");
  printf("║░░░░░╚═╝░░░░░░░░╚════╝░░░░░░╚═════╝░░░░░░░░░░░╚══════╝░░░░╚════╝░░░░░░╚═════╝░░░░░╚══════╝░░░░╚═╝░░╚═╝░░░╚═╝░░║\n");
  printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
  printf("╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");

  printf("\n");
  printf("....................................................................................................\n");
  printf("....................................................................................................\n");
  printf(".......................................................::...........................................\n");
  printf("...................................................-+++++++=:.......................................\n");
  printf(".................................................:+++++++++++=......................................\n");
  printf(".................................................++++-----=+++=.....................................\n");
  printf("................................................:+++-------=+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("................................................:+++--------+++.....................................\n");
  printf("..........................................:=++=--+++--------+++.....................................\n");
  printf("........................................=+++++++++++--------+++.....................................\n");
  printf("...............................:=====-.=+++=---+++++--------+++.....................................\n");
  printf(".............................-++++++++++++------=+++--------+++.....................................\n");
  printf("......................::::..-+++=---=+++++------=+++--------+++.....................................\n");
  printf("...................:+++++++++++=------++++-------+++--------+++.....................................\n");
  printf("..................=++++==++++++=------++++-------+++--------+++.....................................\n");
  printf(".................-+++=-----++++=------++++-------+++--------+++.....................................\n");
  printf(".................=+++------++++=------++++-------+++--------+++.....................................\n");
  printf(".................=+++------++++=------++++-------+++--------+++.....................................\n");
  printf(".................=+++------++++=------++++-------+++--------+++.....................................\n");
  printf(".................=+++------++++=------++++-------+++--------+++.....................................\n");
  printf(".................=+++------++++=------++++------=+++--------+++....:-==++++=-:......................\n");
  printf(".................=+++------++++=------++++------=+++--------++++++++++++++++++++=:..................\n");
  printf(".................=+++------++++=------+++++-----++++--------+++++++==-------==++++=.................\n");
  printf(".................=+++------+++++------+++++++++++++---------++=-----------------++++................\n");
  printf(".................=+++------++++++===++++==+++++++=------------------------------=+++:...............\n");
  printf(".................=++++=--=+++++++++++++=-----------------------------------=++++++++................\n");
  printf(".................-+++++++++++----====----------------------------------=++++++++++-.................\n");
  printf(".................:+++======-----------------------------------------++++++=-::......................\n");
  printf("..................+++=--------------------------------------------+++++-............................\n");
  printf("..................-+++=-----------------------------------------=++++:..............................\n");
  printf("...................=+++----------------------------------------++++-................................\n");
  printf("...................:++++-------------------------------------+++++..................................\n");
  printf(".....................++++----------------------------------=++++:...................................\n");
  printf("......................=+++=-------------------------------++++=.....................................\n");
  printf(".......................-++++=---------------------------=++++:......................................\n");
  printf(".........................=++++=-----------------------=++++-........................................\n");
  printf("..........................:-++++++=---------------==+++++-..........................................\n");
  printf(".............................:=++++++++++++++++++++++++.............................................\n");
  printf(".................................-=++++++++++++++++=:...............................................\n");
  printf(".......................................::::::::.....................................................\n");
  printf("....................................................................................................\n");
  printf("....................................................................................................\n");
  printf("\033[0;3m");
  printf("\nVocê atingiu o limite de tentativas. A palavra era '%s'.\n", output_word);
}

// ######################### Funções principais #########################

// Função para contar o número de palavras no arquivo
int countWordsInFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return -1;
    }

    int count = 0;
    char word[MAX_WORD_LENGTH];

    while (fscanf(file, "%s", word) != EOF) {
        count++;
    }

    fclose(file);
    return count;
}

// Função para selecionar uma palavra aleatória
char *getRandomWordFromFile(const char *filename, int wordCount) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return NULL;
    }

    int randomIndex = rand() % wordCount; // Gera um índice aleatório
    char *randomWord = (char *)malloc(MAX_WORD_LENGTH * sizeof(char));
    if (randomWord == NULL) {
        perror("Erro ao alocar memória");
        return NULL;
    }

    for (int i = 0; i <= randomIndex; i++) {
        fscanf(file, "%5s", randomWord); // %5s para garantir que no máximo 5 caracteres sejam lidos
    }

    fclose(file);
    return randomWord;
}

// Conta a frequencia de letras repitidas numa palavra
void contarFrequencia(char word[MAX_WORD_LENGTH], int freq[26]) {
    for (int i = 0; i < 26; i++) {
        freq[i] = 0; // Inicializa o array de frequências
    }
    for (int i = 0; i < MAX_WORD_LENGTH - 1; i++) {
        if (isalpha(word[i])) {
            freq[toupper(word[i]) - 'A']++;
        }
    }
}

void validarIguais(char input[MAX_WORD_LENGTH], char output[MAX_WORD_LENGTH], char temp[MAX_WORD_LENGTH], int *allCorrect) {
    *allCorrect = 1; // Assume que todas as letras estão corretas
    for (int i = 0; i < MAX_WORD_LENGTH - 1; i++) {
        temp[i] = input[i];  // Copiar o valor original de input para temp
    }

    for (int i = 0; i < MAX_WORD_LENGTH - 1; i++) {
        if (toupper(input[i]) == toupper(output[i])) {
            temp[i] = '1';  // Substituir por '1' quando for igual na mesma posição
        } else {
            temp[i] = '0';  // Temporário para indicar não igual
            *allCorrect = 0; // Marca como falso se houver diferença
        }
    }
}

void validarPertence(char input[MAX_WORD_LENGTH], char output[MAX_WORD_LENGTH], char temp[MAX_WORD_LENGTH]) {
    int freq_output[26] = {0};  // Frequência das letras em output
    contarFrequencia(output, freq_output);

    for (int i = 0; i < MAX_WORD_LENGTH - 1; i++) {
        if (temp[i] != '1') {  // Ignorar letras já marcadas como '1'
            char letra = toupper(input[i]);
            if (freq_output[letra - 'A'] > 0) {
                temp[i] = '2';  // Substituir por '2' se a letra está em output, mas em posição diferente
                freq_output[letra - 'A']--;  // Reduzir a contagem para evitar duplicação
            } else {
                temp[i] = '3';  // Substituir por '3' se a letra não está em output
            }
        }
    }
}

// Função para imprimir as cores
void printColor(char colorCode) {
    if (colorCode == '1') {
        printf("\033[0;32m");  // Verde
    } else if (colorCode == '2') {
        printf("\033[0;33m");  // Amarelo
    } else if (colorCode == '3') {
        printf("\033[0;30m");  // Preto
    } else {
        printf("\033[0m");  // Resetar a cor para o padrão
    }
}


int main() {
    // Iniciando o github

    char words[MAX_WORDS][MAX_WORD_LENGTH];
    char input_word[MAX_WORD_LENGTH] = "";
    char input_string[10];
    char output_word[MAX_WORD_LENGTH] = ""; // Inicializando para evitar lixo de memória
    char valid_word[MAX_WORD_LENGTH];
    char temp[MAX_WORD_LENGTH] = {0};  // Inicializa o array temp com zeros
    int found = 0;
    short int modoDeJogo;
    int tamanhoString;
    int allCorrect = 0;     // Verifica se todas as letras estão na posição correta

    if (DEVELOPER) {
        printf("\033[0;31m");
        printf("\n- Apagar essa configuração depois");
        printf("\nJogo funcionando sob condições de Desenvolvimento\n");
        printf("\033[0m");
    }

    if (DEVELOPER) {
        sleep(3);
    }

    modoDeJogo = modoDeJogar();
    // NORMAL = '10'
    // DESENVOLVEDOR = '20'

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    const char *filename = FILE_NAME;
    int wordCount = countWordsInFile(filename);

    if (wordCount == -1) {
        return 1;
    }

    char *randomWord = getRandomWordFromFile(filename, wordCount);
    if (randomWord != NULL) {
        strncpy(output_word, randomWord, MAX_WORD_LENGTH - 1); // Garantir que não ocorra overflow
        output_word[MAX_WORD_LENGTH - 1] = '\0'; // Garantir a terminação nula
        if (modoDeJogo == 20) {
            printf("Palavra aleatória selecionada: %s\n", output_word);
        }
        free(randomWord);
    }

    printf("\n");

    for (int j = 0; j < MAX_WORD_LENGTH - 1; j++) {
        printf("╔═══╗ ");
    }
    printf("\n");
    for (int j = 0; j < MAX_WORD_LENGTH - 1; j++) {
        printf("║ %d ║ ", j + 1);
    }
    printf("\n");
    for (int j = 0; j < MAX_WORD_LENGTH - 1; j++) {
        printf("╚═══╝ ");
    }
    printf("\n");

    int wordIndex = 0; // Para indexar as palavras válidas

    for (int numWords = 0; numWords < MAX_WORDS; numWords++) {

        while (1) {
            printf("\nDigite uma palavra de %d letras: ", MAX_WORD_LENGTH - 1);
            scanf("%s", input_string);

            tamanhoString = strlen(input_string);
            printf("tamanho = %d", tamanhoString);
            if (tamanhoString != MAX_WORD_LENGTH - 1) {
                printf("\033[0;31m");
                printf("\nErro: A palavra precisa ter exatamente %d letras.\n\n", MAX_WORD_LENGTH - 1);
                printf("\033[0m");
                continue;
            }
            break;
        }

        strncpy(input_word, input_string, MAX_WORD_LENGTH - 1);
        input_word[MAX_WORD_LENGTH - 1] = '\0';  // Certifique-se de que a string seja nula terminada

        // Remover newline se existir
        input_word[strcspn(input_word, "\n")] = '\0';

        if (modoDeJogo) {
            // Debug
            printf("\nString lida: '%s'\n", input_word);
            printf("Comprimento da string: %zu\n", strlen(input_word));
        }

        FILE *file = fopen(FILE_NAME, "r");
        if (file == NULL) {
            printf("Não foi possível abrir o arquivo %s.\n", FILE_NAME);
            return 1;
        }

        found = 0; // Reset found for each input
        while (fgets(valid_word, sizeof(valid_word), file) != NULL) {
            valid_word[strcspn(valid_word, "\n")] = '\0';
            if (strcmp(input_word, valid_word) == 0) {
                found = 1;
                break;
            }
        }

        fclose(file);

        if (found) {
            if (modoDeJogo) { printf("'%s' é uma palavra válida.\n", input_word); }
            strncpy(words[wordIndex], input_word, MAX_WORD_LENGTH - 1);
            words[wordIndex][MAX_WORD_LENGTH - 1] = '\0';
            wordIndex++; // Incrementa o índice para a próxima palavra
        } else {
            printf("'%s' não é uma palavra válida.\n", input_word);
            numWords--; // Reverte o índice de palavras válidas
            continue; // Se a palavra não for válida, vá para a próxima tentativa
        }

        

        // Registra a variável input_word
        char words_valid[MAX_WORDS][MAX_WORD_LENGTH];
        for (int i = 0; i < wordIndex; i++) {
            strcpy(words_valid[i], words[i]);
            printf("(%d): %s\n", i, words_valid[i]); // Imprime a palavra registrada
        }
        printf("%d", wordIndex);

        

        if (DEVELOPER) {
            printf("\nPalavra formatada com cores:\n\n");
        }

        for (int u = 0; u < wordIndex; u++) {
            strcpy(input_word, words_valid[u]);


            // Converter todas as letras para maiúsculas antes da impressão
            for (int i = 0; i < MAX_WORD_LENGTH - 1; i++) {
                input_word[i] = toupper(input_word[i]);
            }
            

            // Valida letras iguais e substitui por '1'
            validarIguais(input_word, output_word, temp, &allCorrect);
            // Valida letras que pertencem a output e substitui por '2', e não pertencem por '3'
            validarPertence(input_word, output_word, temp);


            

            // Linha superior
            for (int j = 0; j < MAX_WORD_LENGTH - 1; j++) {
                printColor(temp[j]);
                printf("╔═══╗ ");
            }
            printf("\033[0m\n");

            // Linha central com letras
            for (int j = 0; j < MAX_WORD_LENGTH - 1; j++) {
                printColor(temp[j]);
                printf("║ %c ║ ", input_word[j]);
            }
            printf("\033[0m\n");

            // Linha inferior
            for (int j = 0; j < MAX_WORD_LENGTH - 1; j++) {
                printColor(temp[j]);
                printf("╚═══╝ ");
            }
            printf("\033[0m\n");
        }

        printf("\n");

        if (allCorrect) {
            imagem(3);
            break;  // Sai do loop principal, pois o jogador ganhou
        }

        if (wordIndex == MAX_WORDS) {
            youLoser(output_word);
        }
    }

    return 0;
}
