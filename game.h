#ifndef GAME_H
# define GAME_H


#include <stdio.h>
#include <unistd.h>

# define GAME "JEU"
# define AMARIA "Village d'Amaria"
# define MAISON "Maison"

struct item
{
    int sword;
    int shield;
    int atk;
    int def;
    int life;
    int max_life;
};

#endif
