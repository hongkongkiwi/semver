#ifndef SEMVER_H
# define SEMVER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

# define CHECK(str, i) if (str[i] == '.') {i += 1;} else return (0);
# define COMP(v1, v2) (v1 > v2) ? putstr("after\n") : putstr("before\n");

typedef struct		s_version
{
	unsigned int	major;
	unsigned int	minor;
	unsigned int	patch;
	char			*type;
	char			*meta;
}					t_version;

char				*version_to_string(t_version *version);
t_version			*string_to_version(char *input);
void				compare_precedence(char *input);

t_version			*init_version(void);
int					valid(char *str, t_version *v1, t_version *v2);
int					grab_v(char *str, t_version *v, int *i);
void				compare_versions(t_version *v1, t_version *v2);
void				string_compare(char *s1, char *s2);

int					is_whitespace(char c);
void				putstr(char *s);
void				move_to_after_space(char *str, int *i);
void				move_to_plus_or_space(char *str, int *i);
unsigned int		ft_atoi(char *str, int *i);
char				*strjoin(char *s1, char *s2);
char				*strsub(char *str, int start, int len);
char				*str_delim(char *str, int i);
char				*utoa(unsigned int num);

#endif
