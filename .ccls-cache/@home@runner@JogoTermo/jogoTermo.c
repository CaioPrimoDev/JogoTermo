#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <malloc.h>
#include <unistd.h>

#define MAX_WORDS 5 
#define MAX_WORD_LENGTH 6  
// Incluindo o caractere nulo
#define FILE_NAME "palavras_validas.txt"

// ######################### Funções de decoração e jogabilidade #########################

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
    printf("╔═══════════════════════════════════════════════════════════════════╗\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n"); 
    printf("║░░████████╗░░░░░███████╗░░░░░██████╗░░░░░░███╗░░░███╗░░░░░░█████╗░░║\n"); 
    printf("║░░╚══██╔══╝░░░░░██╔════╝░░░░░██╔══██╗░░░░░████╗░████║░░░░░██╔══██╗░║\n"); 
    printf("║░░░░░██║░░░░░░░░█████╗░░░░░░░██████╔╝░░░░░██╔████╔██║░░░░░██║░░██║░║\n");
    printf("║░░░░░██║░░░░░░░░██╔══╝░░░░░░░██╔══██╗░░░░░██║╚██╔╝██║░░░░░██║░░██║░║\n"); 
    printf("║░░░░░██║░░░░░░░░███████╗░░░░░██║░░██║░░░░░██║░╚═╝░██║░░░░░╚█████╔╝░║\n");
    printf("║░░░░░╚═╝░░░░░░░░╚══════╝░░░░░╚═╝░░╚═╝░░░░░╚═╝░░░░░╚═╝░░░░░░╚════╝░░║\n");
    printf("║░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░║\n");
    printf("╚═══════════════════════════════════════════════════════════════════╝\n");
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

    int modo;

    iniciar();

      sleep(5);  // Pausa a execução por 5 segundos

    system("clear");

    imagem(1);

    printf("\n\nRegras:\n1. Digite com o caps lock desativado.");
    printf("\n2. Cada palavra deve conter 5 letras.");
    printf("\n3. Você só terá 5 chances.");
    printf("\n4. As palavras não tem acento.");

    printf("\033[0;36m");
    printf("\n\nIniciando jogo...");
    printf("\033[0m");

    sleep(7);  // Pausa a execução por 5 segundos
    system("clear");

    imagem(2);

    while(1){
       printf("\nSelecione o modo de jogo: \n1 - Jogo Normal\n2 - Modo Desenvolvedor\n... ");
       if(scanf("%d", &modo) != 1 || modo < 1 || modo > 2){
          printf("\033[0;31m");
          printf("\n\nErro: Selecione uma opção válida\n");
          printf("\033[0m"); // Reseta a cor
          while(getchar() != '\n')
          continue;
       } else
           break;
    }

    system("clear");

    loading();

    if(modo == 2){
        return 1;
    }else 
        return 0;
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

// Função para converter string para maiúsculas
void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

// Função para verificar se uma letra está na palavra em qualquer posição diferente da correta
int isLetterInWord(char letter, const char *word) {
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == letter) {
            return 1;
        }
    }
    return 0;
}

// Função para validar a variavel input_word
char validar(char input_word[MAX_WORD_LENGTH], char output_word[MAX_WORD_LENGTH],int allCorrect, int j){

    if (input_word[j] == output_word[j]) {
        printf("\033[0;32m");  // Verde para letras corretas na posição correta
    } else if (isLetterInWord(input_word[j], output_word)) {
        printf("\033[0;33m");  // Amarelo para letras que estão na palavra, mas em posição diferente
        allCorrect = 0;
    } else {
        printf("\033[0;37m");  // Branco para letras que não estão na palavra
        allCorrect = 0;
    }

if(allCorrect == 1){
    return 1;
} else if(allCorrect == 0)
    return 0;

} 
// Por algum motiva fica dando aviso de algo errado, deve ser porque só ha 'return' sob condições

int main() {

    // Iniciando o github

    char words[MAX_WORDS][MAX_WORD_LENGTH];
    char input_word[MAX_WORD_LENGTH] = "";
    char input_string[5];
    char output_word[MAX_WORD_LENGTH] = ""; // Inicializando para evitar lixo de memória
    char valid_word[MAX_WORD_LENGTH];
    int found = 0;
    int modoDeJogo;
    int tamanho;

    modoDeJogo = modoDeJogar();

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
        if(modoDeJogo){printf("Palavra aleatória selecionada: %s\n", output_word);}
        free(randomWord);
    }


    tamanho = strlen(output_word);
    printf("\n");


        for(int j = 0; j < strlen(output_word); j++){
            printf("+---+ ");
        }
    printf("\n");
        for(int j = 0; j < strlen(output_word); j++){
            printf("| %d | ", j + 1);
        }
    printf("\n");
        for(int j = 0; j < strlen(output_word); j++){
            printf("+---+ ");
        }

        printf("\n");


    // Incrementar com loop for
    int cont_words = 0;


    // Corrigir isso
    if(modoDeJogo != 1){system("clear");}


    for (int i = 0; i < MAX_WORDS; i++) {

            printf("\nDigite uma palavra de %d letras: ", tamanho);
            scanf("%s", input_string);
            //fgets(input_word, sizeof(input_word), stdin);

            // Devido a essa parte do codigo, a variavel input_word só é capaz de ler os 5 primeiros caracteres, não que isso seja ruim, uma vez que o parametro usado é MAX_WORD_LENGHT
            strncpy(input_word, input_string, MAX_WORD_LENGTH - 1);
            input_word[MAX_WORD_LENGTH - 1] = '\0';  // Certifique-se de que a string seja nula terminada

            // Remover newline se existir
            input_word[strcspn(input_word, "\n")] = '\0';

        if(modoDeJogo){    
        // Debug
        printf("\nString lida: '%s'\n", input_word);
        printf("Comprimento da string: %zu\n", strlen(input_word));
        }

        if (strlen(input_word) < MAX_WORD_LENGTH - 1) {
            printf("\033[0;31m");
            printf("\nErro: A palavra precisa ter exatamente %d letras.\n\n", tamanho);
            if(modoDeJogo){printf("MENOR\n");}
            printf("\033[0m");                    
            continue;
        }

        if (strlen(input_word) > MAX_WORD_LENGTH - 1) {
            printf("\033[0;31m");
            printf("\nErro: A palavra precisa ter exatamente %d letras.\n\n", tamanho);
            if(modoDeJogo){printf("MAIOR\n");}
            printf("\033[0m");                    
            continue;
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
            if(modoDeJogo){printf("'%s' é uma palavra válida.\n", input_word);}            
            strncpy(words[i], input_word, MAX_WORD_LENGTH - 1);
            words[i][MAX_WORD_LENGTH - 1] = '\0';
        } else {
            printf("'%s' não é uma palavra válida.\n", input_word);
            continue; // Se a palavra não for válida, vá para a próxima tentativa
        }

        // Converte input_word e output_word para maiúsculas
        toUpperCase(input_word);
        toUpperCase(output_word);

        // Verifica se todas as letras estão na posição correta
        int allCorrect = 1;

        printf("\nPalavra formatada com cores:\n\n");

        for (int j = 0; j < strlen(input_word); j++) {

            allCorrect = validar(input_word, output_word, allCorrect, j);

            // Imprime a letra na horizontal
            printf("+---+ ");
        }

        printf("\n");

        for (int j = 0; j < strlen(input_word); j++) {

            validar(input_word, output_word, allCorrect, j);

            printf("| %c | ", input_word[j]);
        }

        printf("\n");

        for (int j = 0; j < strlen(input_word); j++) {

            validar(input_word, output_word, allCorrect, j);

            printf("+---+ ");
        }

        printf("\033[0m"); // Reseta a cor

        printf("\n");

        if (allCorrect == 1) {
            imagem(3);
            break;  // Sai do loop principal, pois o jogador ganhou
        }

        if (i == MAX_WORDS - 1) {
            youLoser(output_word);
        }
    }

    return 0;
}