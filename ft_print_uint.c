/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:09:58 by adjelili          #+#    #+#             */
/*   Updated: 2025/11/21 14:39:22 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	if (n < 0)
		return (count + 2);
	else
		return (count + 1);
}

int ft_print_uint(unsigned int n)
{
	if (nb == -2147483648)
		ft_print_str("-2147483648");
	else if (nb < 0)
	{
		ft_print_char('-');
		nb = -nb;
		ft_print_int(nb);
	}
	else if (nb >= 10)
	{
		ft_print_int(nb / 10);
		ft_print_int(nb % 10);
	}
	else
		ft_print_char(nb + '0');
	return (ft_count(n));
}

/*#include <stdio.h>

int main(void)
{
	printf("%u\n", ft_print_uint(-42));
	printf("%u", -42);
	return (0);
}*/