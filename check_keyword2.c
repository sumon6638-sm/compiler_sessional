#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isKeyword(char* str)
{
	if (!strcmp(str, "auto") || !strcmp(str, "default")
		|| !strcmp(str, "signed") || !strcmp(str, "enum")
		||!strcmp(str, "extern") || !strcmp(str, "for")
		|| !strcmp(str, "register") || !strcmp(str, "if")
		|| !strcmp(str, "else") || !strcmp(str, "int")
		|| !strcmp(str, "while") || !strcmp(str, "do")
		|| !strcmp(str, "break") || !strcmp(str, "continue")
		|| !strcmp(str, "double") || !strcmp(str, "float")
		|| !strcmp(str, "return") || !strcmp(str, "char")
		|| !strcmp(str, "case") || !strcmp(str, "const")
		|| !strcmp(str, "sizeof") || !strcmp(str, "long")
		|| !strcmp(str, "short") || !strcmp(str, "typedef")
		|| !strcmp(str, "switch") || !strcmp(str, "unsigned")
		|| !strcmp(str, "void") || !strcmp(str, "static")
		|| !strcmp(str, "struct") || !strcmp(str, "goto")
		|| !strcmp(str, "union") || !strcmp(str, "volatile"))
		return (true);
	return (false);
}

// Driver code
int main()
{
	char str[10];

  printf("Enter your keyword: ");
  scanf("%s", str);

	isKeyword(str)
		? printf("Yes it is a keyword.\n")
		: printf("No it is not a keyword.\n");
	return 0;
}