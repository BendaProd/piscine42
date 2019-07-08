/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 09:35:19 by asoursou          #+#    #+#             */
/*   Updated: 2019/07/08 05:58:59 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb < 3 || !(nb % 2))
		return (nb == 2);
	i = 3;
	while (i * i <= nb)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}