/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42.fr                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:07:43 42.fr           #+#    #+#             */
/*   Updated: 2016/09/22 18:07:44 42.fr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int			i;
	int			j;

	i = -1;
	j = (int)ft_strlen(s1);
	while (*(s2 + ++i))
		*(s1 + j++) = *(s2 + i);
	*(s1 + j) = '\0';
	return (s1);
}
