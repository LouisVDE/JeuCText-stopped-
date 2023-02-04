#include "game.h"

void lvl_amaria(const char NAME[10], int vie, int max_vie, int choix, int atk, int def, int sword, int shield)
{
    choix = 0;
    system("clear");
    prt_info(AMARIA, NAME, vie, max_vie, atk, def);
    printf("| 1 = Votre maison | 2 = Boutique | 3 = Sortie Nord |\n");
    choix = ft_choix(choix);
    if (choix == 1)
    {
        system("clear");
        printf("Voulez-vous rentrer ?\n");
        printf("| 1 = oui | 2 = non |\n");
        choix = ft_choix(choix);
        if (choix == 1)
        {
            system("clear");
            printf("Vous rentrez...\n");
            sleep(2);
            lvl_house(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_amaria(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
        else
        {
            ft_err_choix(choix);
            lvl_amaria(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
    }
    else if (choix == 2)
    {
        system("clear");
        printf("Voulez-vous rentrer ?\n");
        printf("| 1 = oui | 2 = non |\n");
        choix = ft_choix(choix);
        if (choix == 1)
        {
            system("clear");
            printf("Vous rentrez...\n");
            sleep(2);
            lvl_amaria_shop(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_amaria(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
        else
        {
            ft_err_choix(choix);
            lvl_amaria(NAME, vie, max_vie, choix, atk, def, sword, shield);
        }
    }
}