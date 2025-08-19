#include <stdio.h>
/**
 *function: print size of types on any computer it is compiled and run on
 *
 *Main: entry point
 *
 * Return (0)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n",sizeof(char));
	printf("size of an int: %zu byte(s)\n",sizeof(int));
	printf("size of a long int %zu byte(s)\n",sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n",sizeof(long long int));
	printf("size of a float: %zu byte(s)\n",sizeof(float));

	return(0);
}
