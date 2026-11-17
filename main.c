#include <stdio.h>
#include "compare.c"
/*
#include "draw.c"
#include "input.c"
*/

int main()
{
    int generated[] = {1,2,3,4};
    int input[] = {3,2,4,3};
    int response[4] = {0,0,0,0};

    compare(generated, input, response);

    for(int i = 0; i<4;i++)
    {
        switch(response[i])
        {
            case 0:
                {
                    printf("\033[1;31m%2d\033[0m", input[i]);
                    break;
                }
            case 1:
                printf("\033[1;32m%2d\033[0m", input[i]);
                break;
            case 2:
                printf("\033[1;33m%2d\033[0m", input[i]);
                break;
        }
    }

    return 0;
}
