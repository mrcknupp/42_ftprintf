/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 03:34:21 by mrodrigo          #+#    #+#             */
/*   Updated: 2022/05/15 03:34:25 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *received_str, ...);
int		scan_string(const char flag, va_list args);

// print utils
int		len_putnum(int num);
int		len_puthex(unsigned int num, int islower);
int		len_putpointer(unsigned long int pointer);
int		len_putchar(int c);
int		len_putstr(char *s);
int		len_putunsigned(unsigned int num);

// all around utils
char	*ft_utoa(unsigned int num, char *str, int base);
char	*ft_ultoa(unsigned long int num, char *str, int base);
char	*ft_rev_string(char *string);

#endif