/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coolfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:42:21 by jidrizi           #+#    #+#             */
/*   Updated: 2024/04/10 01:13:16 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putchar(char c)
{
	write(1, &c, 1);
}

static int	putnum(unsigned int x)
{
	int	y;

	y = 0;
	if (x >= 10)
		x += putnum (x / 10);
	x += putchar ((x % 10) + '0');
	return (x);
}

int	put_unsigned(unsigned int z)
{
	if (x == 0)
		return (putchar('0'));
	else
		return (putnum(z));
}

int	putstr(char *c)
{
	int	x;

	x = 0;
	if (!c)
		x += write (1, "(null)", 6);
	while (*c)
	{
		x += putchar(*c);
		c++;
	}
	return (x);
}
