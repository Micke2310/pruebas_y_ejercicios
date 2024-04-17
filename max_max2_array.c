#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int array[] = {3,5,10,50,20};

int max = array [0];
int max2 = array [0];

int i = 1;
int tamaño = 5;

	while (i <= tamaño)
	{
	if (array[i] > max)
		{
		max = i;
		}
		i++;
	}

	if (array[i] > max2 && i == max)
		{
		max2 = i;
		i++;
		}

		printf("i = %d\n ", i);
		printf("max = %d\n ", max);
		printf("max2 = %d\n ", max2);
return (0);
}
