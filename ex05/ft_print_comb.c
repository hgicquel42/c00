/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:45:08 by hgicquel          #+#    #+#             */
/*   Updated: 2021/06/30 15:33:32 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char x)
{
	write(1, &x, 1);
}

void	ft_print_numbers(char a, char b, char c)
{
	ft_print(a);
	ft_print(b);
	ft_print(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_print(',');
		ft_print(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_numbers(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
