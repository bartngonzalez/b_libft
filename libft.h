/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:11:18 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/11 17:17:19 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isdigit(int c);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *s, int c);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strdup(const char *s1);

size_t	ft_strlen(const char *str);

char	*ft_strncpy(char *dst, const char *src, size_t len);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif
