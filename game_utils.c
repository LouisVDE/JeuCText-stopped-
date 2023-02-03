#include "game.h"

//PERSO
int prt_info(char lieu[20], char NAME[10], int vie)
{
    printf("---------------------------------------\n");
    printf("| LIEU : %s | %s | PV : %d |\n", lieu, NAME, vie);
    printf("---------------------------------------\n");
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
    printf("Que faites-vous ? Entrez un nombre : ");
    scanf("%d",&choix);
}