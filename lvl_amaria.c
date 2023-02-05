#include "game.h"

void lvl_amaria(const char NAME[10], int choix, struct item item)
{
    item.atk = ft_verif_atk(item);
    item.def = ft_verif_def(item);
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
            if (item.shield == 1)
            {
                system("clear");
                printf("Ne perds pas plus de temps %s !\n", NAME);
                sleep(2);
                lvl_amaria(NAME, choix, item);
            }
            if (item.elder_trigger == 0)
            {
                system("clear");
                printf("C'est ferme\n", NAME);
                sleep(2);
                lvl_amaria(NAME, choix, item);
            }
            else if (item.elder_trigger == 1)
            {
                item.elder_trigger = 0;
                system("clear");
                printf("Vous rentrez...\n");
                sleep(2);
                lvl_elder_house(NAME, choix, item);
            }
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
        printf("Vous sortez ...\n");
        sleep(2);
        item.elder_trigger = 1;
        lvl_nexit(NAME, choix, item);
    }
    else
    {
        ft_err_choix(choix);
        lvl_amaria(NAME, choix, item);
    }
}