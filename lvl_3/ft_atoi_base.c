/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:56:27 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/16 20:50:26 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);    
}
int get_digit(char c, int digit_in_base)
{
	int max;
	if (digit_in_base <= 10)
		max = digit_in_base + '0';
	else
		max = digit_in_base - 10 + 'a';

	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a');
	else
		return (-1);
}
int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int s = 1;
	int digit;

	if (*str == '-')
	{
		s = -1;
		++str;
	}
	
	while ((digit = get_digit(to_lower(*str), str_base) >= 0))
	{
		res = res * str_base;
		res = res + (digit * s);
		++str;
	}
	return (res);
}