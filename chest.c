#include "game.h"

int house_chest(int atk, int def,int sword, int shield)
{
    if (sword == 0)
    {
        system("clear");
        printf("Vous ouvrez le coffre...\n");
        sleep(3);
        system("clear");
        printf("Vous trouvez une epee !\n");
        atk += 2;
        sleep(2);
        return atk;
    }
    else
    {
        system("clear");
        printf("Ce coffre est vide !\n");
        sleep(2);
        system("clear");
        return atk;
    }
}