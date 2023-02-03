#include "game.h"

void lvl_house(const char NAME[10], int vie, int choix)
{
    prt_info(MAISON, NAME, vie);
    printf("1 = Porte | 2 = Coffre | 3 = Lit\n");
    choix = ft_choix(choix);
}