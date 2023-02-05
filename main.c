#include "game.h"

int main()
{
    struct item item;
    system("clear");
    //lieu
    char lieu[20];
    //perso
    const char NAME[1];
    //item
    item.atk = 0;
    item.def = 0;
    item.life = 3;
    item.max_life = 3;
    item.shield = 0;
    item.sword = 0;
    item.elder_trigger = 0;
    //choix
    int choix = 0;
        
    //parametrage
    printf("Bienvenue dans %s.\n", GAME);
    printf("CE JEU NE DISPOSE PAS DE SYSTEME DE SAUVEGARDE !\n");
    sleep(4);
    system("clear");
    printf("Entre un nom pour ton personnage : ");
    scanf("%s",NAME);
    system("clear");

    //Debut du jeu
    printf("Vous etes chez vous, dans le village d'Amaria\n");
    sleep(3);
    system("clear");
    lvl_house(NAME, choix, item);
}
