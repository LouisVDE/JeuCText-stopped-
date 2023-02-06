#include "game.h"

//PERSO
int prt_info(char lieu[20], char NAME[10], struct item item)
{
    printf("--------------------------------------------------------------------\n");
    printf("| LIEU : %s | %s | PV : %d/%d | ATQ : %d | DEF : %d |\n", lieu, NAME, item.life, item.max_life, item.atk, item.def);
    printf("--------------------------------------------------------------------\n");
}

//FIN
void ft_victory(char NAME[10])
{
    printf("Bravo %s, vous etes sortit du village.\n", NAME);
}

void ft_defeat(char NAME[10])
{
    printf("Vous avez perdu ! Vous n'etes pas parvenu a sortir du village.\n", NAME);
}

int ft_choix(int choix)
{
    choix = 0;
    printf("Que faites-vous ? Entrez un nombre : ");
    scanf("%d",&choix);
    return choix;
}

void ft_err_choix(int choix)
{
        system("clear");
        printf("Entrez un nombre valide !\n");
        sleep(3);
        system("clear");
}

int ft_verif_atk(struct item item)
{
if  (item.sword == 0)
        return item.atk = 0;
else if  (item.sword == 1)
        return item.atk = 5;
else if (item.sword == 2)
        return item.atk = 12;
else
        return item.atk = 30;
}

int ft_verif_def(struct item item)
{
if  (item.shield == 0)
        return item.def = 0;
else if  (item.shield == 1)
        return item.def = 5;
else if (item.shield == 2)
        return item.def = 12;
else
        return item.def = 30;
}