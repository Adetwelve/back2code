#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Print lowwercase letters except q and e
 *
 */
int main(void)
{
	char lc = 'a';
	while(lc <= 'z')
	{
		if (lc == 'e' || lc == 'q')
		{
			lc++;
			continue;
		}
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
