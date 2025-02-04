/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:20:14 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/04 12:57:37 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

char    *ft_strrev(char *str)
{
    int     i = 0;
    char    s;
    int     x = 0;
    
    while (str[i])
        i++;
    while (x < i / 2)
    {
        s = str[x];
        str[x]= str[i - 1];
        str[i - 1] = s;
        x++;
        i--;
    }
    return (str);
}
int main ()
{
    char str[] = "dazai";
    char *s = ft_strrev(str);
    printf( "%s\n", s);
}