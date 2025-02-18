/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:56:27 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/18 15:15:25 by obouftou         ###   ########.fr       */
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

//????????????????????????/?????????????????
int    ft_atoi_base(const char *str, int str_base)
{
    int i = 0, res = 0, sign = 1, digit;

    if (!str || (str_base < 2 || str_base > 16 ))
        return 0;
        
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            digit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            digit = str[i] - 'A' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        res = res * str_base + digit;
        i++;
    }
    return (res * sign);
}
int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0, res = 0, signe = 1, digit;
	if (!str || (str_base < 2 || str_base > 16 ))
		return 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] + '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else
			break;
		if (digit >= str_base)
			break;
		res = res * str_base + digit;
		i++;
	}
}












int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0, s = 1, res = 0, digit;
	
	if (!str || (str_base < 2 || str_base > 16))
		return 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] + '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
				digit = str[i] - 'A' + 10;
		else
			break;
		if (digit >= str_base )
			break;
		res = res * str_base + digit;
		i++; 
	}
	return(res * s);
}







int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0, s = 1, res = 0, digit;

	if (!str || (str_base < 2 || str_base > 16))
		return 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit = str[i] + '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			digit = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else
			break;
		if (digit >= str_base)
			break;
		res = res * str_base + digit;
		i++; 
	}
	return (res * s);
 }