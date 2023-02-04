#include "game.h"

void lvl_house(const char NAME[10], int vie, int max_vie,  int choix)
{
    choix = 0;
    system("clear");
    prt_info(MAISON, NAME, vie, max_vie);
    printf("1 = Porte | 2 = Coffre | 3 = Lit\n");
    choix = ft_choix(choix);
    if (choix == 1)
    {
        system("clear");
        printf("Voulez-vous sortir ?\n");
        printf("| 1 = oui | 2 = non |\n");
        choix = ft_choix(choix);
        if (choix == 1)
        {
            system("clear");
            printf("Vous sortez...");
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_house(NAME, vie, max_vie, choix);
        }
    }
    else if (choix == 2)
    {
        system("clear");
        printf("Vous ouvrez le coffre...\n");
        sleep(3);
        system("clear");
        printf("COFFRE A FAIRE\n");
        sleep(3);
        system("clear");
        lvl_house(NAME, vie, max_vie, choix);
    }
    else if (choix == 3)
    {
        system("clear");
        printf("Voulez vous dormir ?\n");
        printf("| 1 = oui | 2 = non |\n");
        choix = ft_choix(choix);
        if (choix == 1)
        {
            system("clear");
            printf("Vous dormez...\n");
            sleep(3);
            vie = max_vie;
            lvl_house(NAME, vie, max_vie, choix);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_house(NAME, vie, max_vie, choix);
        }
    }
    else
    {
    ft_err_choix(choix);
    lvl_house(NAME, vie, max_vie, choix);
    }
}
