/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:39:01 by adjelili          #+#    #+#             */
/*   Updated: 2025/11/20 15:20:12 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int		y;
	int		count;
	va_list	args;

	va_start(args, format);
	y = 0;
	count = 0;
	while (format[y])
	{
		if (format[y] == '%')
		{
			y++;
			ft_test_format(format[y]);
			count = count + ft_test_format(format[y]);
			ft_print_str(va_arg(args, char *));
		}
		else
		{
			write(1, &format[y], 1);
			count++;
			y++;
		}
	}
	va_end(args);
	return (count);
}

int	ft_test_format(char c)
{
	if (c == 'd')
		ft_print_int(va_arg(args, int));
	else if (c == 'c')
		ft_print_char(va_arg(args, int)); // int pcq on le fait avec le tableau ascii
	else if (c == 's')
		ft_print_str(va_arg(args, char *));
}
int main(void)
{
	ft_printf("hello !");
	return (0);
}