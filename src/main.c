#include "../includes/libc.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		if (!strcmp(av[1], "-s"))
		{
			t_version *v = string_to_version(av[2]);
			printf("The Major value returned [%u]\n", v->major);
			printf("The Minor value returned [%u]\n", v->minor);
			printf("The Patch value returned [%u]\n", v->patch);
			if (v->type)
				printf("The pre-release type returned ['%s']\n", v->type);
			if (v->meta)
				printf("The build metadata returned ['%s']\n", v->meta);
			free(v);
		}
		else if (!strcmp(av[1], "-v"))
		{
			t_version 	*v = string_to_version(av[2]);
			char		*str = version_to_string(v);
			printf("The string converted from input is [%s]\n\n", str);
			free(v);
			free(str);
		}
		else if (!strcmp(av[1], "-c"))
			compare_precedence(av[2]);
		else
			printf("\nYour input '%s' is not a valid flag\n\n", av[1]);
	}
	else if (ac > 3)
		putstr("\nError: too many inputs\n\n");
	else
	{
		putstr("\nSemver testing uses three flags, which are as follows:\n");
		putstr("\nTest the string_to_version() function using the '-s' flag:\n");
		putstr("ex)   ./semver -s \"1.1.1\"\n\nTest the version_to_string() function");
		putstr(" using the '-v' flag:\nex)   ./semver -v \"1.1.1\"\n\nTest the ");
		putstr("compare_precedence() function using the '-c' flag: \nex)   ./semver ");
		putstr("-c \"1.1.1 1.2.1\"\n\n");
	}
}
