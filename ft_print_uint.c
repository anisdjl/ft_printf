/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:09:58 by adjelili          #+#    #+#             */
/*   Updated: 2025/11/22 17:39:30 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_print_uint(unsigned int n)
{
	if (n >= 10)
	{
		ft_print_uint(n / 10);
		ft_print_uint(n % 10);
	}
	else
		ft_print_char(n + '0');
	return (ft_count(n));
}

/*#include <stdio.h>

int main(void)
{
	printf("%u\n", ft_print_uint(-42));
	printf("%u", -42);
	return (0);
}*/