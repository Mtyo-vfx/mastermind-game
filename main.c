#include <stdio.h>
#include <stdbool.h>
#include "compare.c"
#include "draw.c"
#include "input.c"

int main()
{
    int generated[4] = {0};
    int userInput[4] = {0};
    int response[4] = {0};
    bool condition = true;

    draw(generated);

    while(condition)
    {
        input(userInput);

        compare(generated, userInput, response);

        for(int i = 0; i<4;i++)
        {
            switch(response[i])
            {
                case 0:
                    {
                        printf("\033[1;31m%2d\033[0m", userInput[i]);
                        break;
                    }
                case 1:
                    printf("\033[1;32m%2d\033[0m", userInput[i]);
                    break;
                case 2:
                    printf("\033[1;33m%2d\033[0m", userInput[i]);
                    break;
            }
        }
        printf("\n");
        if(response[0]==1 && response[1]==1 && response[2]==1 && response[3]==1)
        {
            condition = false;
        }
    }

    return 0;
}
