/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:56:11 by hgicquel          #+#    #+#             */
/*   Updated: 2021/06/30 15:56:16 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char x)
{
	write(1, &x, 1);
}

void	ft_print_number(int x)
{
	if (x < 10)
	{
		ft_print('0');
		ft_print('0' + x);
	}
	else
	{
		ft_print('0' + x / 10);
		ft_print('0' + x % 10);
	}
}

void	ft_print_numbers(int a, int b)
{
	ft_print_number(a);
	ft_print(' ');
	ft_print_number(b);
	if (a != 98 || b != 99)
	{
		ft_print(',');
		ft_print(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a, b);
			b++;
		}
		a++;
	}
}
