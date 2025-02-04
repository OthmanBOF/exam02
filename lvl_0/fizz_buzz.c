/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 22:06:46 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/04 12:23:01 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


/*
Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/

void ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	write (1, &"0123456789"[i % 10], 1);
}

int main ()
{
	int  j = 1;
	
	while (j < 101)
	{
		if (j % 5 == 0 && j % 3 == 0)
			write (1, "fizzbuzz", 8);
		else if (j % 5 == 0)
			write (1, "buzz", 4);
		else if (j % 3 == 0)
			write (1, "fizz", 4);
		else
			ft_putnbr(j);
		write (1, "\n", 1);
		j++;
	}
}