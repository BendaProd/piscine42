/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 09:06:22 by asoursou          #+#    #+#             */
/*   Updated: 2019/07/08 09:16:16 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i < (unsigned int)nb)
		i++;
	return ((i * i == (unsigned int)nb) ? i : 0);
}
