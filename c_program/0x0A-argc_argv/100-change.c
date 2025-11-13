#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int cents = 0;
	int value[] = {25, 10, 5, 2, 1};
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / value[i];
		cents %= value[i];
	}

	printf("%d\n", coins);
	return (0);
}
