/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 02:03:22 by ckarakus          #+#    #+#             */
/*   Updated: 2022/11/21 02:03:28 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		z = i + 1;
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		base_type;
	int		n[16];

	i = 0;
	if ((base_type = ft_check_base(base)))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (nbr)
		{
			n[i] = nbr % base_type;
			nbr /= base_type;
			i++;
		}
		while (i > 0)
			ft_putchar(base[n[--i]]);
	}
	
}
