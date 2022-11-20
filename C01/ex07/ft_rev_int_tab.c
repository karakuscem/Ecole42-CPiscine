/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 01:35:17 by ckarakus          #+#    #+#             */
/*   Updated: 2022/11/21 01:53:54 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	temp;

	i = -1;
	while (++i < --size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
	}
}
