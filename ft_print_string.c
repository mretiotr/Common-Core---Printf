/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashkoza <ashkoza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:58:22 by ashkoza           #+#    #+#             */
/*   Updated: 2025/12/05 17:41:32 by ashkoza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	count;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
	return (count);
}
