/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:59:52 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/04 13:07:16 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
```
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
```
*/

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
int main ()
{
    char *str1;
    char str2[] = "dazai";
    char *str = ft_strcpy(str1, str2);
    printf("%s\n", str);
}