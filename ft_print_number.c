/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashkoza <ashkoza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:58:22 by ashkoza           #+#    #+#             */
/*   Updated: 2025/12/05 17:48:37 by ashkoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		count++;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		count++;
	}
	else
	{
		count += ft_print_number(n / 10);
		count += ft_putchar((n % 10) + '0');
	}
	return (count);
}
