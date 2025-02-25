char    **ft_split(char *str)
{
	int i = 0, i2 = 0, i3;
	char **tab = malloc(sizeof(**tab) * 100);

	while (str[i])
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = malloc(100);
			while(str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}






char    **ft_split(char *str)
{
	int i = 0;
	int i2 = 0;
	int i3;

	char **tab = malloc(sizeof(**tab)   * 100);
	while (str[i])
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = malloc(100);
			while (str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);   
}















char    **ft_split(char *str)
{
	int i = 0, i2 = 0, i3;
	char **tab = malloc(sizeof(**tab) * 100);

	while (str[i])
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = malloc(100);
			while (str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}




















char **ft_split(char str)
{

}















