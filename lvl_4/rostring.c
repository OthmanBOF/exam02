#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write (1, str++, 1);
    }
}

char    **ft_split(char *str)
{
    int i = 0;
    int i2 = 0;
    int i3;
    char **list = (char **)malloc(sizeof(**list) * 1000);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i])
    {
        if (str[i] > 32)
        {
            i3 = 0;
            list[i2] = (char *)malloc(sizeof(char) * 1000);
            while (str[i] > 32)
            {
                list[i2][i3] = str[i];
                i++;
                i3++;
            }
            list[i2][i3] = '\0';
            i2++;
        }
        else 
            i++;
    }
    list[i2] = 0;
    return (list);
}

int main(int c, char **v)
{
    int i = 1;
    char **list = NULL;
    if (c == 2)
    {
        list  = ft_split(v[1]);
        while (list[i])
        {
            ft_putstr(list[i]);
            write (1, " ", 1);
            i++;
        }
        ft_putstr(list[0]);
    }
    write (1, "\n", 1);
    return (0);
}