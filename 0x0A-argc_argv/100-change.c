#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int ans, cents;

		ans = 0;
		cents = atoi(argv[1]);

		if (cents > 0)
		{
			ans += cents / 25;
			cents %= 25;
			ans += cents / 10;
			cents %= 10;
			ans += cents / 5;
			cents %= 5;
			ans += cents / 2;
			cents %= 2;
			ans += cents;
		}

		printf ("%d\n", ans);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
