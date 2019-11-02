#include "./semver.h"

void		compare_precedence(char *input)
{
	t_version	*v1;
	t_version	*v2;

	v1 = init_version();
	v2 = init_version();
	if (valid(input, v1, v2))
		compare_versions(v1, v2);
	else
		putstr("invalid\n");
	free(v1);
	free(v2);
}

t_version	*string_to_version(char *input)
{
	int			i;
	t_version	*result;

	i = 0;
	result = init_version();
	if (grab_v(input, result, &i))
		return (result);
	else
	{
		free(result);
		fprintf(stderr, "error: Invalid input on string_to_version(), \
				make sure Semantic Version format is correct.\n");
		return (NULL);
	}
}

char		*version_to_string(t_version *version)
{
	char	*string;
	char	*temp;
	char	*x;
	char	*y;
	char	*z;

	x = utoa(version->major);
	y = utoa(version->minor);
	z = utoa(version->patch);
	temp = strjoin(x, ".");
	string = strjoin(temp, y);
	free(temp);
	temp = strjoin(string, ".");
	string = strjoin(temp, z);
	free(temp);
	return (string);
}

void		compare_versions(t_version *v1, t_version *v2)
{
	if (v1->major == v2->major)
	{
		if (v1->minor == v2->minor)
		{
			if (v1->patch == v2->patch)
				putstr("equal\n");
			else
				COMP(v1->patch, v2->patch);
		}
		else
			COMP(v1->minor, v2->minor);
	}
	else
		COMP(v1->major, v2->major);
}

t_version	*init_version(void)
{
	t_version	*res;

	res = (t_version*)malloc(sizeof(t_version));
	res->major = 0;
	res->minor = 0;
	res->patch = 0;
/*	res->pr_num = 0;*/
	return (res);
}

int			valid(char *str, t_version *v1, t_version *v2)
{
	int i;

	i = 0;
	if (!grab_v(str, v1, &i))
		return (0);
	if (!grab_v(str, v2, &i))
		return (0);
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int			grab_v(char *str, t_version *v, int *i)
{
	v->major = ft_atoi(str, i);
	CHECK(str, *i);
	v->minor = ft_atoi(str, i);
	CHECK(str, *i);
	v->patch = ft_atoi(str, i);
	if (!is_whitespace(str[*i]) && str[*i] != '-' && str[*i] != '\0')
		return (0);
	else if (str[*i] == '-')
	{
		*i += 1;
	/*	v->pr_type = str_delim(str, i);
		v->pr_num = ft_atoi(str, i);*/
	}
	else
		move_space(str, i);
	return (1);
}
