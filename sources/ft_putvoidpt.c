/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoidpt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:14:53 by myevou            #+#    #+#             */
/*   Updated: 2023/11/20 19:49:09 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_putcharrt(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

int	ft_putvoidpt(unsigned long address, char format)
{
	int		len;

	len = 0;
	if (!address)
	{
		if (format == '0')
			return ((ft_putstrrt("(nil)")));
		else
			return (write (1, "0", 1));
	}
	else
	{
		len = count_void(address);
		if (format == '0')
			len += ft_putstrrt("0x");
		ft_printhexbase(address, format);
	}
	return (len);
}
