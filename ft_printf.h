/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:21:03 by myevou            #+#    #+#             */
/*   Updated: 2023/11/15 14:27:07 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putcharrt(char c);
int	ft_putstrrt(char *str);
int	ft_putnbrrt(int nbr);
int	ft_putvoidpt(unsigned long long address, char format);

#endif
