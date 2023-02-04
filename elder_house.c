#include "game.h"

int lvl_elder_house(const char NAME[10], int choix, struct item item)
{
    system("clear");
    printf("Sort de chez moi %s !\n", NAME);
    sleep(3);
    lvl_amaria(NAME, choix, item);
}