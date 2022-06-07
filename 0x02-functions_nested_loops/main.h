#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On suceess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
/**{
*	return(write(1, &c, 1));
*}
*/
