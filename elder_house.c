#include "game.h"

int lvl_elder_house(const char NAME[10], int choix, struct item item)
{
    if (item.shield == 0)
    {
        system("clear");
        printf("Qu'est ce qu'il ce passe %s ?\n", NAME);\
        sleep(2);
        printf("Des monstres dans la foret ?!\n");
        sleep(3);
        system("clear");
        printf("Prends ce bouclier ! Et n'oublie pas ton epee !\n");
        sleep(3);
        item.shield = 1;
        system("clear");
        printf("Vous obtenez le bouclier de bois !\n");
        sleep(2);
        system("clear");
        printf("Vous sortez ...\n");
        sleep(2);
        lvl_amaria(NAME, choix, item);
        return item.shield;
    }
}