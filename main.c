#include <stdio.h>
#include <stdarg.h>

int _printf(const char* format, ...);

int main() {
 int len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
 printf("%d", len);
 return (0);
}
