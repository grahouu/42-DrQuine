#include <stdio.h>
/*
	Start program
*/
void	printquote(char **lines, int i)
{
	printf(lines[13], 34, lines[i], 34, 44, 10);
}
int		main()
{
	int		i;
	char	*lines[] = {
		"%s%c",
		"#include <stdio.h>",
		"/*",
		"	Start program",
		"*/",
		"void	printquote(char **lines, int i)",
		"{",
		"	printf(lines[13], 34, lines[i], 34, 44, 10);",
		"}",
		"int		main()",
		"{",
		"	int		i;",
		"	char	*lines[] = {",
		"		%c%s%c%c%c",
		"	};",
		"/*",
		"	output file",
		"*/",
		"	for(i = 1; i < 13; i++)",
		"		printf(lines[0], lines[i], 10);",
		"	for(i = 0; i < 26; i++)",
		"		printquote(lines, i);",
		"	for(i = 14; i < 26; i++)",
		"		printf(lines[0], lines[i], 10);",
		"	return (0);",
		"}",
	};
/*
	output file
*/
	for(i = 1; i < 13; i++)
		printf(lines[0], lines[i], 10);
	for(i = 0; i < 26; i++)
		printquote(lines, i);
	for(i = 14; i < 26; i++)
		printf(lines[0], lines[i], 10);
	return (0);
}
