/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:41:14 by ltacos            #+#    #+#             */
/*   Updated: 2021/08/11 15:07:20 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	Arifmetic_sqrt(int nb, int d, int iter);

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (Arifmetic_sqrt(nb, 1, 0));
}

int	Arifmetic_sqrt(int nb, int d, int iter)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (iter);
	nb -= d;
	return (Arifmetic_sqrt(nb, (d + 2), (iter + 1)));
}
