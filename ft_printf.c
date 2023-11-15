/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:21:06 by myevou            #+#    #+#             */
/*   Updated: 2023/11/15 17:15:49 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include "libft.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (str)
	{
		if (*str == '%')
		{
			arg_type(args, *(str + 1), &count);
			str++;
		}
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (count);
}

void	arg_type(va_list args, const char c, int *count)
{
	if (c == 'c')
		count += ft_putchar(va_arg(args, char));
	else if (c == 's')
		count += ft_putstrrt(va_arg(args, char *));
	else if (c == 'p')
	{
		count += ft_putstrrt("0x");
		count += ft_putvoidpt(va_arg(args, unsigned long long), 'x');
	}
	else if ((c == 'd') || (c == 'i'))
		count += ft_putstrrt(ft_itoa(va_arg(args, int)));
	else if (c == 'u')
		count += ft_putstrrt(ft_itoa(va_arg(args, unsigned int)));
	else if (c == 'x')
		count += ft_putvoidpt(va_arg(args, unsigned long long), 'x');
	else if (c == 'X')
		count += ft_putvoidpt(va_arg(args, unsigned long long), 'X');
	else if (c == '%')
		count += ft_putcharrt('%');
}

#include <unistd.h>
#include<stdio.h>

int	main(void)
{
	printf("Je teste juste cette putain de fonction %ih que oui", 0);
}
