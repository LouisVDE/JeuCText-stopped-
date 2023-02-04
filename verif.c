#include "game.h"

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