/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:57:29 by bgonzale          #+#    #+#             */
/*   Updated: 2018/09/17 20:01:21 by bgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = NULL;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dup != NULL)
		ft_strcpy(dup, s1);
	return (dup);
}
