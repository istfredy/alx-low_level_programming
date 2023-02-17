#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
/* Code here */
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
}
