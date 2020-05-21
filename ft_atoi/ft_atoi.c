#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str) {
  int i = 0;
  int number = 0;
  int sign = 1;
  while (str[i] != '\0' && (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')) {
    i++;
  }
  if (str[i] == '-') {
    sign = -1;
    i++;
  }
  if (str[i] == '+') {
    i++;
  }
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
    number = (number * 10) + str[i] - 48;
    i++;
  }
  return number * sign;
}

int main(void) {
  printf("%d\n", ft_atoi("1234"));
  return (0);
}
