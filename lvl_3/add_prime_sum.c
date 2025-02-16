/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:17:06 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/13 09:48:36 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int res = 0;

	while(*str)
		res = res * 10 + (*str++ - 48);
	return (res);
}
void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
int is_prime(int n)
{
	int i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = ft_atoi(av[1]);
		int sum = 0;
		if (nbr < 0)
		{
			write(1, "0", 1);
			exit(1);
		}
		while (nbr)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	return (0);
}

