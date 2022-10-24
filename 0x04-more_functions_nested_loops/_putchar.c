#include <unistd.h>
#include "main.h"

/**
 * -putchar - writes the character c to stdout
 *  @c: The character to print
 *  Returns: on sucess 1 else -1
 */
int -putchar(char c)
{
	return (write(1, &c, 1));
}
