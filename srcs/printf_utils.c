/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:38:30 by mrodrigo          #+#    #+#             */
/*   Updated: 2022/06/12 05:57:12 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned int num, char *str, int base)
{
	const char		digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int				i;
	unsigned int	remain;

	if ((base < 2) || (base > 36))
		return (NULL);
	i = 0;
	while (num != 0)
	{
		remain = num % base;
		str[i++] = digits[remain];
		num /= base;
	}
	str[i] = '\0';
	ft_rev_string(str);
	return (str);
}

char	*ft_ultoa(unsigned long int num, char *str, int base)
{
	const char		digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int				i;
	unsigned int	remain;

	if ((base < 2) || (base > 36))
		return (NULL);
	i = 0;
	while (num != 0)
	{
		remain = num % base;
		str[i++] = digits[remain];
		num /= base;
	}
	str[i] = '\0';
	ft_rev_string(str);
	return (str);
}

char	*ft_rev_string(char *string)
{
	int		len;
	int		i;
	char	temp;

	len = ft_strlen(string);
	i = -1;
	while (++i < ft_strlen(string) / 2)
	{
		temp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = temp;
	}
	return (string);
}
