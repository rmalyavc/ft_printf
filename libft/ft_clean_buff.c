/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_buff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalyavc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:37:33 by rmalyavc          #+#    #+#             */
/*   Updated: 2018/01/20 20:43:35 by rmalyavc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_clean_buff(char **buffer, char ***ptr)
{
	int		i;

	i = -1;
	if (buffer == NULL || *buffer == NULL)
		return ;
	while (buffer[++i] != NULL)
		ft_strdel(buffer);
	*ptr = NULL;
}
