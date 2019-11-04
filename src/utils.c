#include "../includes/libc.h"


/*	Checks if character is whitespace.	*/
int				is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\n' || c == '\r' ||
			c == '\v')
		return (1);
	return (0);
}


/*	Traverses index of string to relevant locations.	*/
void			move_to_after_space(char *str, int *i)
{
	while (is_whitespace(str[*i]))
		*i += 1;
}

void			move_to_plus_or_space(char *str, int *i)
{
	while (!is_whitespace(str[*i]) && str[*i] != '+' && str[*i] != '\0')
		*i += 1;
}


/*	Functions for converting between 'string' and 'unsigned integer' data types.	*/
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
	if (!(result = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		result[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}


/*	String Manipulation Functions.	*/
char			*strjoin(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(result = (char*)malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1)))
		return (NULL);
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
	if (!(result = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		result[i] = str[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char			*str_delim(char *str, int i)
{
	char	*result;
	int		j;

	j = i;
	while (!is_whitespace(str[j]) && str[j] != '+' && str[j] != '\0')
		j++;
	if (j == i)
		return (NULL);
	result = strsub(str, i, j - i);
	return (result);
}
