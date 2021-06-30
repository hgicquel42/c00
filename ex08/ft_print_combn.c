/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:37:22 by hgicquel          #+#    #+#             */
/*   Updated: 2021/06/30 18:48:59 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_combt(int *t, int n)
{
	int	i;

	while (t[0] <= (10 - n))
	{
		i = 0;
		while (i < n)
			ft_print('0' + t[i++]);
		if (t[0] == (10 - n))
			break ;
		ft_print(',');
		ft_print(' ');
		i = n;
		while (i--)
		{
			t[i]++;
			if (t[i] <= (10 - n) + i)
				break ;
		}
		while (i < (n - 1))
		{
			t[i + 1] = t[i] + 1;
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	t[9];
	int	i;

	i = 0;
	while (i < n)
	{
		t[i] = i;
		i++;
	}
	ft_print_combt(t, n);
}

// int	main(void)
// {
// 	ft_print_combn(5);
// 	return (0);
// }
