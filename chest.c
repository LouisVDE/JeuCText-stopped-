#include "game.h"

int house_chest(struct item item)
{
    if (item.sword == 0)
    {
        system("clear");
        printf("Vous ouvrez le coffre...\n");
        sleep(3);
        system("clear");
        printf("Vous trouvez une epee !\n");
        item.sword = 1;
        sleep(2);
        return item.sword;
    }
    else
    {
        system("clear");
        printf("Ce coffre est vide !\n");
        sleep(2);
        system("clear");
        return item.sword;
    }
}