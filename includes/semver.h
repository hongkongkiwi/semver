/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 08:12:51 by cdimitro          #+#    #+#             */
/*   Updated: 2019/11/01 10:37:32 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEMVER_H
# define SEMVER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define CHECK(str, i) if (str[i] == '.') {i += 1;} else return (0);

typedef struct		s_version
{
	unsigned int	major;
	unsigned int	minor;
	unsigned int	patch;
	char			*pr_type;
	unsigned int	pr_num;
}					t_version;

t_version			*init_version(void);
int					valid(char *str, t_version *v1, t_version *v2);
int					grab_v(char *str, t_version *v, int *i);

int					is_whitespace(char c);
void				count_space(char *str, int *i);
int					ft_strlen(char *s);
unsigned int		ft_atoi(char *str, int *i);
char				*ft_strsub(char *str, int start, int len);
char				*str_delim(char *str, int *i);

#endif
