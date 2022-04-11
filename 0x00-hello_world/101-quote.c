#include <stdio.h>

/**
 *main - print to string
 *Description: print "and that piece of art is useful..." without using 'puts'
 *return: 1
 */

int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
__asm__ ("syscall"
: "=a" (ret)
: "a" (syscall),
"D" (fd),
"S" (s),
"d" (l));
return (1);
}
