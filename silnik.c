#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void losuj_kod(int kod[4])
{
    srand(time(NULL));
    for(int i = 0; i < 4; i++)
    {
        kod[i] = (rand() % 6) + 1;
    }
}
