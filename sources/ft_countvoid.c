/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countvoid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:21:26 by myevou            #+#    #+#             */
/*   Updated: 2023/11/20 19:50:52 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_void(unsigned long address)
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
