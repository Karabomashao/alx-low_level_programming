#include <stdio.h>

/**
 * main - putchar to list 1
 * Return: true if 0 false otherwise
 */
int main(void)
{
	int x;

    	for (x = 0; x < 10; x++)
    	{
        	putchar(x + '0');
        	if (x < 9)
        	{
            		putchar(',');
            		putchar(' ');
        	}
    	}
    	putchar('\n');
    	return (0);
}
