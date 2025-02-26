#include <stdlib.h>
#include <unistd.h>

void hbet(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z' )
        {
            if (str[i + 1] == ' ' || str[i + 1] == '\0')
                str[i] -= 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}
int main (int ac, char **av)
{
    int i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            hbet(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}