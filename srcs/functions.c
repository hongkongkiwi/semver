/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 09:30:43 by cdimitro          #+#    #+#             */
/*   Updated: 2019/11/01 10:38:46 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/semver.h"

int				is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\n' || c == '\r' ||
			c == '\v')
		return (1);
	return (0);
}

void			count_space(char *str, int *i)
{
	while (is_whitespace(str[*i]))
		*i += 1;
}

int				ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
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

char			*ft_strsub(char *str, int start, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = (char*)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		res[i] = str[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char			*str_delim(char *str, int *i)
{
	char	*res;
	int		j;

	j = ft_strlen(str) - 1;
	while (j > *i && str[j] != '.')
		j--;
	if (j > *i)
	{
		res = ft_strsub(str, *i, j - *i);
		return (res);
	}
	return (NULL);
}
