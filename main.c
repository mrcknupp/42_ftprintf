/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:45:38 by mrodrigo          #+#    #+#             */
/*   Updated: 2022/06/12 05:46:50 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	char	str[9] = "Born2Beer";
	int		a;

	a = 333;
	ft_printf("\nHello World, %s", str);
	ft_printf("\nNumber, %i", a);
	ft_printf("\nHexa, %x", a);
	ft_printf("\nPoint, %p", str);
	ft_printf("\n");
	return (0);
}
