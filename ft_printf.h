/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:25:44 by abarchil          #+#    #+#             */
/*   Updated: 2021/11/08 09:27:11 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>

int		ft_convert_hex(size_t nb);

int		ft_convert_hex_upper(unsigned int nb);

int		ft_chose_convert(va_list arg, char c);

int		ft_printf(const char *format, ...);

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_unsgined_putnbr_fd(unsigned int n, int fd);

void	ft_putstr_fd(char *s, int fd);

size_t	ft_strlen(const char *s);

int		ft_nbr_length(int n);

int		ft_unsigned_nbr_length(unsigned int n);

int		ft_hex_length(int n);

int		ft_convert_u(va_list arg);

int		ft_convert_p(va_list arg);

int		ft_convert_xx(va_list arg);

int		ft_convert_x(va_list arg);

int		ft_convert_di(va_list arg);

int		ft_convert_s(va_list arg);

int		ft_convert_c(va_list arg);

int		ft_str_search(char *s, char c);

#endif
