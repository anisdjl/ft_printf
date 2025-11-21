/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:40:41 by adjelili          #+#    #+#             */
/*   Updated: 2025/11/21 16:41:17 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_test_format(char c, va_list args)
{
	if (c == 'd')
		return (ft_print_int(va_arg(args, int)));
	else if (c == 'c')
		ft_print_char(va_arg(args, int)); // int pcq on le fait avec le tableau ascii
	else if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	// else if (c == 'x' || c == 'X')
	// 	return (ft_print_hex(va_arg(args, char)));
	// else if (c == '%')
	// 	return (ft_print_char('%'));
	// else if (c == 'p')
	// 	return (ft_print_ptr(va_arg(args, int)));
	// else
	// {
	// 	ft_print_char('%');
	// 	ft_print_char(c);
	// 	return (2);
	// }
	return (0);
}