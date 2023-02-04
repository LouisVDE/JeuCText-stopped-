#include "game.h"

//PERSO
int prt_info(char lieu[20], char NAME[10], int vie, int max_vie, int atk, int def)
{
    printf("----------------------------------------------------------\n");
    printf("| LIEU : %s | %s | PV : %d/%d | ATK : %d | DEF : %d |\n", lieu, NAME, vie, max_vie, atk, def);
    printf("----------------------------------------------------------\n");
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