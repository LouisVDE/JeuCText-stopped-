#include "game.h"

void lvl_amaria(const char NAME[10], int choix, struct item item)
{
    choix = 0;
    system("clear");
    prt_info(AMARIA, NAME, item);
    printf("| 1 = Votre maison | 2 = Maison de l'Ancien | 3 = Sortie Nord |\n");
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
            lvl_house(NAME, choix, item);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_amaria(NAME, choix, item);
        }
        else
        {
            ft_err_choix(choix);
            lvl_amaria(NAME, choix, item);
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
            lvl_elder_house(NAME, choix, item);
        }
        else if (choix == 2)
        {
            system("clear");
            lvl_amaria(NAME, choix, item);
        }
        else
        {
            ft_err_choix(choix);
            lvl_amaria(NAME, choix, item);
        }
    }
    else if (choix == 3)
    {
        system("clear");
        printf("Vous vous dirigez vers la sortie ...\n");
        system("clear");
        ft_victory(NAME);
    }
    else
    {
        ft_err_choix(choix);
        lvl_amaria(NAME, choix, item);
    }
}