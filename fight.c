#include "game.h"

void nexit_fight(const char NAME[10], int choix, struct item item)
{
    system("clear");
    printf("Vous entrez dans un combat !\n");
    sleep(2);
    system("clear");
    goblin();
}