/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:41:54 by jidrizi           #+#    #+#             */
/*   Updated: 2024/04/10 01:15:15 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libftities/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(const char *smth, ...);
int	putchar(char c);
int	put_unsigned(unsigned int z);
int	putstr(char *c);
int	puthex(unsigned long int x, char *base);
int	putnbr(int x);
int	hex_conversion_therapy(unsigned long int x, char *hexbase);
int	makehex(unsigned long int x, const char string);
int	put_ptr(void *ptr);

#endif
