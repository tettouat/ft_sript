/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tettouat <tettouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:42:23 by tettouat          #+#    #+#             */
/*   Updated: 2015/02/16 14:59:14 by tettouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while ((s1[i] == s2[i]) && (s1[i] != '\0'))
			i++;
		return (s1[i] - s2[i]);
	}
	return (-128);
}