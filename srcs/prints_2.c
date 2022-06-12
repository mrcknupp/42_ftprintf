/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:38:40 by mrodrigo          #+#    #+#             */
/*   Updated: 2022/06/12 05:57:39 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_putunsigned(unsigned int num)
{
	int		len;
	char	*nb;

	len = 0;
	nb = (char *)malloc(17 * sizeof(char));
	if (num == 0)
		len += write(1, "0", 1);
	ft_utoa(num, nb, 10);
	len += len_putstr(nb);
	free(nb);
	return (len);
}
