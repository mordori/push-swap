/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:46:28 by myli-pen          #+#    #+#             */
/*   Updated: 2025/08/03 14:40:16 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_UTILS_H
# define LIBFT_UTILS_H

# include <stdint.h>

# include "libft_defs.h"

bool		ft_isalpha(int c);
bool		ft_isdigit(int c);
bool		ft_isalnum(int c);
bool		ft_isascii(int c);
bool		ft_isprint(int c);
int			ft_atoi(const char *str);
int			ft_atoi_base(const char *str, const char *base);
int			ft_toupper(char *c);
int			ft_tolower(char *c);
bool		ft_strchrdup(const char *base);
size_t		ft_countdigits(long long n, const size_t len);
size_t		ft_ucountdigits(uintptr_t n, const size_t len);
char		*ft_uitoa(uintptr_t n, const char *base);
char		*ft_itoa(int n, const char *base);
uint32_t	ft_atouint32_t_base(const char *str, const char *base);
int64_t		ft_atol(char *str, char *end);

#endif
