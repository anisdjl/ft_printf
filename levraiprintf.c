/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   levraiprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:29:05 by adjelili          #+#    #+#             */
/*   Updated: 2025/11/21 14:40:57 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a = 42;
	int *p = &a;
	char c = 'a';
	char str[] = "hello";
	int y = -55;
	unsigned int b = y;
	
	printf("pointer %p\n", p);
	printf("integer %d\n", a);
	printf("char %c\n", c);
	printf("string %s\n", str);
	printf("hex min %x\n", a);
	printf("hex %X\n", a);
	printf("le pourcentage %%\n");
	printf("%r\n");
	printf("%u\n", 42);
	printf("%u", b);
	
}