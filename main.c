#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strdup(const char *s);

int main(void)
{
  char *word;
  int c1;
  int c2;
  printf("\n");
  printf("**********************");
  printf("TESTE FUNCAO FT_STRLEN");
  printf("**********************\n");
  word = "1";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "12";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "123";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "1234";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "12345";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "123456";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "1234567"; 
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "12345678";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  word = "123456789";
  c1 = strlen(word);
  c2 = ft_strlen(word);
   printf("Valor esperado %d, valor obtido %d\n", c1, c2);
  
  word = "1234567890";
  c1 = strlen(word);
  c2 = ft_strlen(word);
  printf("Valor esperado %d, valor obtido %d\n", c1, c2);

  printf("\n");
  printf("**********************");
  printf("TESTE FUNCAO FT_STRCPY");
  printf("**********************\n");

  const char *src;
  char dst1[100];
  char dst2[100];

  src = "";
  printf("Valor esperado %s, valor obtido %s\n", strcpy(dst1,src), ft_strcpy(dst2,src));

  src = "c";
  printf("Valor esperado %s, valor obtido %s\n", strcpy(dst1,src), ft_strcpy(dst2,src));

  src = "ca";
  printf("Valor esperado %s, valor obtido %s\n", strcpy(dst1,src), ft_strcpy(dst2,src));

  src = "cas";
  printf("Valor esperado %s, valor obtido %s\n", strcpy(dst1,src), ft_strcpy(dst2,src));

  src = "casa";
  printf("Valor esperado %s, valor obtido %s\n", strcpy(dst1,src), ft_strcpy(dst2,src));


  printf("\n");
  printf("**********************");
  printf("TESTE FUNCAO FT_STRCMP");
  printf("**********************\n");

  char *str1;
  char *str2;

  str1 = "1";
  str2 = "12";
  printf("Valor esperado %d, valor obtido %d\n", strcmp(str1,str2), ft_strcmp(str1,str2));

  str1 = "1";
  str2 = "123";
  printf("Valor esperado %d, valor obtido %d\n", strcmp(str1,str2), ft_strcmp(str1,str2));

  str1 = "aaa";
  str2 = "aaa";
  printf("Valor esperado %d, valor obtido %d\n", strcmp(str1,str2), ft_strcmp(str1,str2));

  str1 = "123456789";
  str2 = "123456789";
  printf("Valor esperado %d, valor obtido %d\n", strcmp(str1,str2), ft_strcmp(str1,str2));

  str1 = "aaa";
  str2 = "a";
  printf("Valor esperado %d, valor obtido %d\n", strcmp(str1,str2), ft_strcmp(str1,str2));

  str1 = "123456789";
  str2 = "12";
  printf("Valor esperado %d, valor obtido %d\n", strcmp(str1,str2), ft_strcmp(str1,str2));

  printf("\n");
  printf("**********************");
  printf("TESTE FUNCAO FT_STRDUP");
  printf("**********************\n");

  char *str3;

  str1 = "";
  str2 = strdup(str1);
  str3 = ft_strdup(str1);
  printf("Valor esperado %s, valor obtido %s\n", str2, str3);

  str1 = "CASA";
  str2 = strdup(str1);
  str3 = ft_strdup(str1);
  printf("Valor esperado %s, valor obtido %s\n", str2, str3);

  str1 = "CASA AmArElA";
  str2 = strdup(str1);
  str3 = ft_strdup(str1);
  printf("Valor esperado %s, valor obtido %s\n", str2, str3);

  return (0);
}