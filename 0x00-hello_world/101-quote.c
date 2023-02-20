#include <unistd.h>

/**
*main - This is a way to print  using message
*
*Return Always 0 (Success)
*/
void main(void)
{
	char *message = "and that piece of art is useful\"
Dora Korpar, 2015-10-19\n";
	write(2, message, 46);
	return (1);
}
