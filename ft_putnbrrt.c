/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrrt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:19:42 by myevou            #+#    #+#             */
/*   Updated: 2023/11/10 17:42:07 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

int	ft_putnbrrt(int nbr)
{
	int		count;
	long	nbrl;

	nbrl = nbr;
	if (nbrl < 0)
	{
		write(1, '-', 1);
		nbrl *= -1;
	}
	if (nbrl > 9)
		ft_putnbrrt(nbrl / 10);
	ft_putcharrt((nbrl % 10) + '0');
	return (ft_strlen(ft_itoa(nbr)));
}
