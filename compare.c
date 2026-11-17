#include <stdio.h>

void compare(int generated[], int input[], int response[])
{
    int used[4] = {0,0,0,0};
	for(int i=0;i<4;i++)
	{
		if(generated[i]==input[i])
        {
            response[i]=1;
            used[i]=1;
        }
        else
        {
            response[i]=0;
        }
    }
    for(int i=0;i<4;i++)
        {
            if(response[i]==0)
            {
                for(int j = 0; j<4;j++)
                {
                    if (used[j]==0 && input[i] == generated[j])
                    {
                        response[i] = 2;
                        used[j] = 1;
                        break;
                    }
                }
            }
        }
}
