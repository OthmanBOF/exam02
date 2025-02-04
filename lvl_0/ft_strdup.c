/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:08:37 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/04 12:34:50 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/


char    *ft_strdup(char *src)
{
    char *dup;
    int x = 0; 
    while (src[x])
        x++;
    dup = malloc(sizeof(char *) * (x + 1));
    if (!dup)
        return(NULL);
    int i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    return (dup);
}
int main ()
{
    char *str = ft_strdup ("dazai");

    printf("%s\n", str);
}