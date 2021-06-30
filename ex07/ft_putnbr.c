/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:57:34 by hgicquel          #+#    #+#             */
/*   Updated: 2021/06/30 16:35:47 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb);

void 	ft_putnbr_n(int nb)
{
	ft_print('-');
	if (nb > -10)
	{
		ft_print('0' - nb);
	}
	else
	{
		ft_putnbr(-(nb / 10));
		ft_putnbr(-(nb % 10));
	}
}

void	ft_putnbr_p(int nb)
{
	if (nb < 10)
	{
		ft_print('0' + nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putnbr_n(nb);
	}
	else
	{
		ft_putnbr_p(nb);
	}
}

// int	main(void)
// {
// 	ft_putnbr(4);
// 	ft_print(',');
// 	ft_putnbr(42);
// 	ft_print(',');
// 	ft_putnbr(420);
// 	ft_print(',');
// 	ft_putnbr(2147483647);
// 	ft_print(',');
// 	ft_putnbr(-4);
// 	ft_print(',');
// 	ft_putnbr(-42);
// 	ft_print(',');
// 	ft_putnbr(-420);
// 	ft_print(',');
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
