#include <stdio.h>
#include <stdarg.h>

int _printf(const char* format, ...);

int main() {
 int len2 = _printf("%b", 1024);
 printf("%d", len2);
 return (0);
}
