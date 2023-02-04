#include "game.h"

void lvl_house(const char NAME[10], int vie, int max_vie, int choix, int atk, int def, int sword, int shield)
{
    choix = 0;
    system("clear");
    prt_info(MAISON, NAME, vie, max_vie, atk, def);
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
            lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
        else
        {
            ft_err_choix(choix);
            lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
    }
    else if (choix == 2)
    {
        atk = house_chest(atk, def, sword, shield);
        sword = 1;
        system("clear");
        lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
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
            lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
        else
        {
            ft_err_choix(choix);
            lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
    }
    else
    {
    ft_err_choix(choix);
    lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
    }
}
