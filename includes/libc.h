#ifndef LIBC_H
# define LIBC_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>


/*	Macros to help our code look clean... CHECK looks for '.' && COMP compares data	*/
# define CHECK(str, i) if (str[i] == '.') {i += 1;} else return (0);
# define COMP(v1, v2) (v1 > v2) ? puts("after") : puts("before");


/*	This is our date type 't_version', it represents Semantic Version guidlines:
 *		< Major . Minor . Patch - Pre_Release_Info + Meta_Data >	*/
typedef struct		s_version
{
	unsigned int	major;
	unsigned int	minor;
	unsigned int	patch;
	char			*type;
	char			*meta;
}					t_version;


/*	This are the four core functions of our library. The inputs vary depending on
 *	the function:
 *		version_to_string() -> *t_version -one valid t_version input
 *		string_to_version() -> "1.1.1"	-one string, one input
 *		compare_precedence() -> "1.1.1  1.2.1"	-one string, two inputs
 *		compare_versions() -> *version1 *version2  -two valid t_version inputs*/
char				*version_to_string(t_version *version);
t_version			*string_to_version(char *input);
void				compare_precedence(char *input);
void				compare_versions(t_version *v1, t_version *v2);


/*	These are functions that allow us to create space in memoryfor the t_version,
 *	validate the inputs, parse the string and grab the relevant data && finally compare
 *	different data types (t_version vs t_version && string vs. string)	*/
t_version			*init_version(void);
int					valid(char *str, t_version *v1, t_version *v2);
int					grab_v(char *str, t_version *v, int *i);
void				string_compare(char *s1, char *s2);


/*	This set of functions are extentions of existing standard C library functions that
 *	are modified to allow for different inputs, as well as some string manipulation.
 *		Example: ft_atoi() extends atoi() to pass in specific positions in the string	*/
int					is_whitespace(char c);
void				move_to_after_space(char *str, int *i);
void				move_to_plus_or_space(char *str, int *i);
unsigned int		ft_atoi(char *str, int *i);
char				*strjoin(char *s1, char *s2);
char				*strsub(char *str, int start, int len);
char				*str_delim(char *str, int i);
char				*utoa(unsigned int num);

#endif
