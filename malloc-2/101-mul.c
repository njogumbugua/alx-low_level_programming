#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int multiply(int num1, int num2);
bool isNumeric(const char *str);

int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    puts("Two arguments are required");
    exit(98);
  }

  char *num1_str = argv[1];
  char *num2_str = argv[2];

  if (!isNumeric(num1_str) || !isNumeric(num2_str)) {
    printf("Error\n");
    exit(98);
}
  int lower = atoi(argv[1]);
  int higher = atoi(argv[2]);
  int result = 0;

  for (int i = lower; i <= higher; i++)
  {
    result = multiply(lower, higher) ;
  }
  printf("%d\n", result);

  return (0); 
}

int multiply(int num1, int num2)
{
  int result;
  result = num1 * num2;
  return result;

}

bool isNumeric(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return false;
        }
        str++;
    }
    return true;
}
