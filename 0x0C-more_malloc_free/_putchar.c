<<<<<<< HEAD
#include <unistd.h>

=======
#include "main.h"
#include <unistd.h>
>>>>>>> fd3de2c5208f3908f7e7d56628e4c62fd0e0e5fa
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
