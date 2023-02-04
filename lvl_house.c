#include "game.h"
void lvl_house(const char NAME[10], int choix, struct item item)
{
    item.atk = ft_verif_atk(item);
    choix = 0;
    system("clear");
    prt_info(MAISON, NAME, item);
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
            printf("Vous sortez...\n");
            sleep(2);
            system("clear");
            lvl_amaria(NAME, choix, item);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_house(NAME, choix, item);
        }
        else
        {
            ft_err_choix(choix);
            lvl_house(NAME, choix, item);
        }
    }
    else if (choix == 2)
    {
        item.sword = house_chest(item);
        system("clear");
        lvl_house(NAME, choix, item);
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
            item.life = item.max_life;
            lvl_house(NAME, choix, item);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_house(NAME, choix, item);
        }
        else
        {
            ft_err_choix(choix);
            lvl_house(NAME, choix, item);
        }
    }
    else
    {
    ft_err_choix(choix);
    lvl_house(NAME, choix, item);
    }
}
