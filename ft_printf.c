/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anis <anis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:39:01 by adjelili          #+#    #+#             */
/*   Updated: 2025/11/21 23:10:40 by anis             ###   ########.fr       */
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
			count = ft_test_format(format[y], args);
		}
		else
		{
			write(1, &format[y], 1);
			count++;
		}
		y++;
	}
	va_end(args);
	return (count);
}

/*#include <stdio.h>
int main(void)
{
	//ft_printf("%d\n", 42);
	ft_printf("%d", ft_printf("%%"));
	//printf("%u", 4294967295);
	return (0);
}*/