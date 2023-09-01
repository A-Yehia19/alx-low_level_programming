#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_string - Entry point
 * @string: number of args
 * Return: Always ans
 */

int check_string (char* string)
{
    int i;
    
    for (i = 0; string[i] != '\0'; ++i)
    {
        if (!isdigit (string[i]))
            return (0);
    }
    return (1);
}


/**
 * main - Entry point
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum, i;

    sum = 0;
    for (i = 1; i < argc; i++)
    {
        if (check_string(argv[i]) == 0)
        {
            printf("Error\n");
            return (1);
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return (0);
}
