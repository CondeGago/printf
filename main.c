#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "Users/cnunez-v/limpios/proj1/libft.h"

int ft_printf(char const *conv, ...)
{
	int	c;
	va_list	args;
	va_start (args, conv);

	while (*conv)
	{
		if(*conv == '%')
			conv++;
		if(*conv == 'c')
		{
			c = va_arg(args, int);
			putchar(c);
		}
		else
			putchar(*conv);
		conv++;
	}
	va_end(args);
}

int main()
{
	char letra = 'A';
	ft_printf("Letra: %c", letra);
}
