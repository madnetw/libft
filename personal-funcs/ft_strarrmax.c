/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <jrameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:04:11 42.fr           #+#    #+#             */
/*   Updated: 2017/07/02 17:56:40 42.fr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strarrmax(char **arr)
{
	int		i;
	int		max;
	int		curr_len;

	i = -1;
	max = 0;
	while (arr[++i])
	{
		curr_len = ft_strlen(arr[i]);
		if (curr_len > max)
			max = curr_len;
	}
	return (max);
}
