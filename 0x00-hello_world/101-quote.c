#include <stdio.h>
/**
 * main - outouts to string
 *
 * Description: Prints out "and that piece of art is useful...." without printf
 *
 * Return: 1
 */
int main(viod)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
__asm__("syscall"
: "=a"(ret)
: "a" (syscall),
"D" (fd),
"S" (s),
"d"(1));
return (1);
}
