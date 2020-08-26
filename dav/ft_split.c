
#include "ft.h"

int is_not_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}



int count_strings(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_not_charset(str[i], charset))
			count++;
		while(str[i] != '\0' && is_not_charset(str[i], charset))
			i++;
		i++;
	}
	return count;
}
int	count_str(char *str, char *charset)
{
	int i = 0;

	while (str[i] != '\0' && is_not_charset(str[i], charset))
		i++;
	return i;
}

void	fill(char *str, int len, char *dest)
{
	int i = 0;

	while (i < len && str[i])
	{
		dest[i] = str[i];
		i++;
	}
}
char **ft_split(char *str, char *charset)
{
	int len_tab;
	char **strs;
	int i;
	int len_str;
	int y = 0;

	i = 0;
	len_tab = count_strings(str,charset);
	if (!(strs = (char**)malloc(sizeof(char*) * (len_tab + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] && !is_not_charset(str[i], charset))
			i++;
		if (str[i] == '\0')
			break;
		len_str = count_str(str + i, charset);
		strs[y] = (char *)malloc(sizeof(char) * (len_str + 1));
		strs[y][len_str] = '\0';
		fill(str + i, len_str, strs[y]);
		while (str[i] && is_not_charset(str[i], charset))
			i++;
		y++;
	}
	strs[y] = NULL;
	return strs;
}
