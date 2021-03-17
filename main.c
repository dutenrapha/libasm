#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
  char *word;
  int c;
  word = "1";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "12";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "123";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "1234";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "12345";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "123456";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "1234567";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "12345678";
  c = ft_strlen(word);
  printf("%d\n", c);

  word = "123456789";
  c = ft_strlen(word);
  printf("%d\n", c);
  
  word = "1234567890";
  c = ft_strlen(word);
  printf("%d\n", c);
  return (0);
}