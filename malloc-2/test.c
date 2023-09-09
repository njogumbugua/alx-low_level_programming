#include <stdio.h>
#include <stdbool.h>

bool isStringDigit(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return false;  // Not a digit
        }
        str++;
    }
    return true;  // All characters are digits
}

int main(void)
{
    const char *myString = "12345";
    if (isStringDigit(myString)) {
        printf("The string contains only digits.\n");
    } else {
        printf("The string contains non-digit characters.\n");
    }

  return (0);
}
