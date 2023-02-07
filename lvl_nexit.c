#include "game.h"

void lvl_nexit(const char NAME[10], int choix, struct item item)
{
    item.atk = ft_verif_atk(item);
    item.def = ft_verif_def(item);
    system("clear");
    if (item.sword == 1 && item.shield == 1)
    {
        printf("Hey %s, viens nous aider !\n", NAME);
        sleep(3);
        system("clear");
        nexit_fight(NAME, choix, item);
    }
    else
    {
        printf("Il y a des monstres dans la foret ! Va te chercher une epee et un bouclier !\n");
        sleep(3);
        system("clear");
        lvl_amaria(NAME, choix, item);
    }
}