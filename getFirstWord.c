#include <stdio.h>
int main()
{
  FILE *fp;
  char word[30];
  fp = fopen("/home/sumon6638/Desktop/test.txt", "r");
  if (fp == NULL)
  {
    printf("Erro ao abrir ficheiro!\n");
  }
  else
  {
    while (!feof(fp))
    {
      fscanf(fp,"%s%*[^\n]",word);
      printf("word read is: %s\n", word);
      strcpy(word, ""); // is this correct?
    }
  }
  fclose(fp);
}