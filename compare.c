#include <stdio.h>

void compare(int tab1[], int tab2[], int response[])
{
	for(int i=0;i<4;i++)
	{
		if(tab1[i]==tab2[i])
        {
            response[i]=1;
        }
        else
        {
            response[i]=0;
        }
	}
}
