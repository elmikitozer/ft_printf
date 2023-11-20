/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myevou <myevou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:21:03 by myevou            #+#    #+#             */
/*   Updated: 2023/11/20 19:50:41 by myevou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
// # include <stdio.h> //supp

// void	arg_type(va_list args, const char c, int *count);
int		ft_printf(const char *str, ...);
int		ft_putcharrt(char c);
int		ft_putstrrt(char *str);
int		ft_putvoidpt(unsigned long address, char format);
int		ft_itoa(int n);
int		ft_uitoa(unsigned int n);
int		ft_strlen(const char *s);
int		count_void(unsigned long address);
void	ft_printhexbase(unsigned long address, char format);

#endif
