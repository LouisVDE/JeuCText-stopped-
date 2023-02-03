#include <stdio.h>

int main()
{
    //perso
    int vie = 3;
    char name[20];
    
    //INVENTAIRE
    //combat
    int sword = 0, shield = 0;

    //debut
    printf("Bienvenue dans NOM A DEFINIR\n");
    printf("CE JEU NE DISPOSE PAS DE SYSTEME DE SAUVEGARDE !\n");
    printf("Entre un nom pour ton personnage\n");
    scanf("%s",name);
    prt_perso(name,vie);
    printf("\n");
    printf("Le but de cette demo est de sortir du village\n");
    system("clear");

    prt_perso(name,vie);
    printf("Vous vous trouvez dans le village de NOM A DEFINIR\n");
    ft_gameover();
}