#include "./semver.h"

void			putstr(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}
}

int				is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\n' || c == '\r' ||
			c == '\v')
		return (1);
	return (0);
}

void			move_space(char *str, int *i)
{
	while (is_whitespace(str[*i]))
		*i += 1;
}

unsigned int	ft_atoi(char *str, int *i)
{
	unsigned int res;

	res = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		res = 10 * res + str[*i] - '0';
		*i += 1;
	}
	return (res);
}

char			*utoa(unsigned int num)
{
	unsigned int	store;
	int				len;
	int				i;
	char			*result;

	store = num;
	i = 0;
	len = 1;
	while (num > 9)
	{
		num /= 10;
		len++;
	}
	result = (char*)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		result[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char			*strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = (char*)malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);
	while (j < (int)strlen(s1))
	{
		result[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (j < (int)strlen(s2))
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char			*strsub(char *str, int start, int len)
{
	char	*result;
	int		i;

	i = 0;
	result = (char*)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		result[i] = str[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char			*str_delim(char *str, int *i)
{
	char	*result;
	int		j;

	j = strlen(str) - 1;
	while (j > *i && str[j] != '.')
		j--;
	if (j > *i)
	{
		result = strsub(str, *i, j - *i);
		return (result);
	}
	return (NULL);
}
