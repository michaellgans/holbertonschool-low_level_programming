#include "main.h"

/**
 * times_table - DONE
 */
void times_table(void)
{
	int h;
	int v;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			if (v == 0)
			{
				printf("%d", h * v);
			}
			else
			{
				printf(",%3d", h * v);
			}
		}
		printf("\n");
	}
}
