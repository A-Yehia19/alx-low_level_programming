#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _atoi - function name
 * @s: input
 * Return: result
 */

int _atoi(char *s)
{
	int ans, i, num_start, num_end, len;

	len = 0;
	ans = 0;
	i = 0;
	num_start = -1;
	num_end = -1;
	while (s[len] != '\0')
	{
		if (s[len] >= '0' && s[len] <= '9' && num_start == -1)
			num_start = len;

		if (!(s[len] >= '0' && s[len] <= '9') && num_start != -1)
			num_end = len+1;

		len++;
	}

	if (num_end == -1)
		num_end = len;
	
	len = num_end - num_start;

	if (num_start != -1)
	{
		for (i = 0; i < len; i++)
		{
			ans += (s[num_end - i -1] - '0') * pow(10, i);
		}
	}

	if(s[num_start - 1] == '-')
		ans *= -1;

	return (ans);
}
