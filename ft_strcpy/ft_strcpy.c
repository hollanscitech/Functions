#include <stdio.h>

char *ft_strcpy(char *dst, char *src) {
  int i;
  i = 0;
  while (src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return dst;
}

int main(void)n{
  char src[] = "hello";
  char dst[0];
  ft_strcpy(dst, src);
  printf("%s\n", dst);
  return 0;
}
