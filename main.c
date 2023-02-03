#include "game.h"

int main()
{
    system("clear");
    //lieu
    char lieu[20];
    //perso
    int vie = 3;
    const char NAME[10];
    //choix
    int choix = 0;
        
    //OBJET
    //combat
    int sword;
    int shield;

    //parametrage
    /*printf("Bienvenue dans %s.\n", GAME);
    printf("CE JEU NE DISPOSE PAS DE SYSTEME DE SAUVEGARDE !\n");
    sleep(4);
    system("clear");
    printf("Le but de cette demo est de sortir du village.\n");
    sleep(4);
    system("clear");*/
    printf("Entre un nom pour ton personnage : ");
    scanf("%s",NAME);
    system("clear");

    //Debut du jeu
    printf("Vous etes chez vous, dans le village d'%s\n", AMARIA);
    sleep(3);
    system("clear");
    lvl_house(NAME, vie, choix);
}