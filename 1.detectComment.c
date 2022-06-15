#include <stdio.h>

int main()
{
  char text[30];

  printf("Enter Text : ");
  gets(text);

  (text[0] == '/' && text[1] == '/')
    ? printf("\nIt is a single line Comment.")
    : (text[0] == '/' && text[strlen(text) - 1] == '/')
      ? printf("\nIt is a multi line Comment.")
      : printf("\nIt is Not a Comment.");
}