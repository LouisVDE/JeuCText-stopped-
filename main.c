#include "game.h"

int main()
{
    system("clear");
    //lieu
    char lieu[20];
    //perso
    const char NAME[10];
    int max_vie = 3;
    int vie = 3;
    int atk = 5;
    int def = 5;
    
    //choix
    int choix = 0;
        
    //OBJET
    //combat
    int sword = 0;
    int shield = 0;

    //parametrage
    printf("Bienvenue dans %s.\n", GAME);
    printf("CE JEU NE DISPOSE PAS DE SYSTEME DE SAUVEGARDE !\n");
    sleep(4);
    system("clear");
    printf("Le but de cette demo est de sortir du village.\n");
    sleep(4);
    system("clear");
    printf("Entre un nom pour ton personnage : ");
    scanf("%s",NAME);
    system("clear");

    //Debut du jeu
    printf("Vous etes chez vous, dans le village d'Amaria\n");
    sleep(3);
    system("clear");
    lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
}
