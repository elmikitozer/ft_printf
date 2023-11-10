/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoidpt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:14:53 by myevou            #+#    #+#             */
/*   Updated: 2023/11/10 19:48:32 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_putcharrt(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

int	count_void(unsigned long long address)
{
	int	len;

	len = 0;
	while (address)
	{
		address /= 16;
		len++;
	}
	return (len);
}

int	ft_putvoidpt(unsigned long long address, char format)
{
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (address > 16)
		ft_putvoidpt(address / 16, format);
	ft_putcharrt(base[address % 16]);
	return (count_void(address));
}

int	main(void)
{
	write(1, "0x", 2);
	ft_putvoidpt(54845187879871231, 'X');
}
